#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <iomanip>

class Person {
private:
    std::string firstName;
    std::string surname;
    std::vector<double> homework;
    double exam;
    double finalGrade;

public:
    // Constructor
    Person();

    // Copy constructor
    Person(const Person& other);

    // Assignment operator
    Person& operator=(const Person& other);

    // Destructor
    ~Person();

    // Input method
    friend std::istream& operator>>(std::istream& in, Person& p);

    // Output method
    friend std::ostream& operator<<(std::ostream& out, const Person& p);

    // Final grade calculation
    void calculateFinalGrade(bool useMedian);

    double getFinalGrade() const { return finalGrade; }
    std::string getFirstName() const { return firstName; }
    std::string getSurname() const { return surname; }
};

#endif
