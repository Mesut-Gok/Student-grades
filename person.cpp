#include "Person.h"
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <random>

Person::Person() : exam(0), finalGrade(0), methodUsed("Average") {}

Person::Person(const Person& other)
    : firstName(other.firstName), surname(other.surname),
      homework(other.homework), exam(other.exam),
      finalGrade(other.finalGrade), methodUsed(other.methodUsed) {}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        firstName = other.firstName;
        surname = other.surname;
        homework = other.homework;
        exam = other.exam;
        finalGrade = other.finalGrade;
        methodUsed = other.methodUsed;
    }
    return *this;
}

Person::~Person() {
    homework.clear();
}

std::istream& operator>>(std::istream& in, Person& p) {
    std::cout << "Enter first name: ";
    in >> p.firstName;
    std::cout << "Enter surname: ";
    in >> p.surname;

    std::cout << "Enter homework grades (end with -1): ";
    double grade;
    p.homework.clear();
    while (in >> grade && grade != -1) {
        p.homework.push_back(grade);
    }

    std::cout << "Enter exam grade: ";
    in >> p.exam;

    return in;
}

std::ostream& operator<<(std::ostream& out, const Person& p) {
    out << std::left << std::setw(12) << p.firstName
        << std::left << std::setw(12) << p.surname
        << std::right << std::setw(20) << std::fixed << std::setprecision(2)
        << p.finalGrade
        << " (" << p.methodUsed << ")";
    return out;
}

void Person::calculateFinalGrade(bool useMedian) {
    if (homework.empty()) {
        finalGrade = exam;
        methodUsed = "Exam Only";
        return;
    }

    double hwScore = 0;
    if (useMedian) {
        std::sort(homework.begin(), homework.end());
        size_t size = homework.size();
        hwScore = (size % 2 == 0) ? (homework[size/2 - 1] + homework[size/2]) / 2.0
                                  : homework[size/2];
        methodUsed = "Median";
    } else {
        hwScore = std::accumulate(homework.begin(), homework.end(), 0.0) / homework.size();
        methodUsed = "Average";
    }

    finalGrade = 0.4 * hwScore + 0.6 * exam;
}

void Person::generateRandomScores(int hwCount) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(1.0, 10.0);

    homework.clear();
    for (int i = 0; i < hwCount; ++i) {
        homework.push_back(dist(gen));
    }
    exam = dist(gen);
}
