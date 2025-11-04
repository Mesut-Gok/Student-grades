#include "Person.h"
#include <numeric>
#include <algorithm>
#include <iomanip>

Person::Person() : exam(0), finalAvg(0), finalMed(0) {}

Person::Person(const Person& other)
    : firstName(other.firstName), surname(other.surname),
      homework(other.homework), exam(other.exam),
      finalAvg(other.finalAvg), finalMed(other.finalMed) {}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        firstName = other.firstName;
        surname = other.surname;
        homework = other.homework;
        exam = other.exam;
        finalAvg = other.finalAvg;
        finalMed = other.finalMed;
    }
    return *this;
}

Person::~Person() {
    homework.clear();
}

void Person::setData(const std::string& name, const std::string& sname,
                     const std::vector<double>& hw, double examScore) {
    firstName = name;
    surname = sname;
    homework = hw;
    exam = examScore;
}

void Person::calculateGrades() {
    if (!homework.empty()) {
        double avg = std::accumulate(homework.begin(), homework.end(), 0.0) / homework.size();
        finalAvg = 0.4 * avg + 0.6 * exam;

        std::vector<double> sorted = homework;
        std::sort(sorted.begin(), sorted.end());
        double med = sorted.size() % 2 == 0
                     ? (sorted[sorted.size()/2 - 1] + sorted[sorted.size()/2]) / 2.0
                     : sorted[sorted.size()/2];
        finalMed = 0.4 * med + 0.6 * exam;
    } else {
        finalAvg = finalMed = exam;
    }
}

std::ostream& operator<<(std::ostream& out, const Person& p) {
    out << std::left << std::setw(10) << p.firstName
        << std::left << std::setw(12) << p.surname
        << std::right << std::setw(14) << std::fixed << std::setprecision(2) << p.finalAvg
        << " |"
        << std::right << std::setw(12) << std::fixed << std::setprecision(2) << p.finalMed;
    return out;
}
