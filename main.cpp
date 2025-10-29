#include "Person.h"
#include <vector>

int main() {
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;

    std::vector<Person> students;
    for (int i = 0; i < n; ++i) {
        Person p;
        std::cin >> p;

        char choice;
        std::cout << "Calculate final grade using median (m) or average (a)? ";
        std::cin >> choice;
        p.calculateFinalGrade(choice == 'm');

        students.push_back(p);
    }

    std::cout << "\nName        Surname     Final_Point(Aver.)\n";
    std::cout << "-------------------------------------------\n";
    for (const auto& student : students) {
        std::cout << student << std::endl;
    }

    return 0;
}

