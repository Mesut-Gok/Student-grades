#include "Person.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::ifstream file("Students.txt");
    if (!file) {
        std::cerr << "Error: Could not open Students.txt\n";
        return 1;
    }

    std::string line;
    std::getline(file, line); // Skip header

    std::vector<Person> students;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name, surname;
        std::vector<double> hw(5);
        double exam;

        iss >> name >> surname;
        for (int i = 0; i < 5; ++i) iss >> hw[i];
        iss >> exam;

        Person p;
        p.setData(name, surname, hw, exam);
        p.calculateGrades();
        students.push_back(p);
    }

    std::sort(students.begin(), students.end(),
              [](const Person& a, const Person& b) {
                  return a.getSurname() < b.getSurname();
              });

    std::cout << "Name      Surname      Final (Avg.) | Final (Med.)\n";
    std::cout << "----------------------------------------------------\n";
    for (const auto& s : students) {
        std::cout << s << '\n';
    }

    return 0;
}
