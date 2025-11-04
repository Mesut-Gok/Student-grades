#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include <string>

class Person {
private:
    std::string firstName;
    std::string surname;
    std::vector<double> homework;
    double exam;
    double finalAvg;
    double finalMed;

public:
    Person();
    Person(const Person& other);
    Person& operator=(const Person& other);
    ~Person();

    friend std::ostream& operator<<(std::ostream& out, const Person& p);

    void setData(const std::string& name, const std::string& surname,
                 const std::vector<double>& hw, double examScore);
    void calculateGrades();

    std::string getFirstName() const { return firstName; }
    std::string getSurname() const { return surname; }
    double getFinalAvg() const { return finalAvg; }
    double getFinalMed() const { return finalMed; }
};

#endif

