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
    double finalGrade;
    std::string methodUsed;

public:
    Person();
    Person(const Person& other);
    Person& operator=(const Person& other);
    ~Person();

    friend std::istream& operator>>(std::istream& in, Person& p);
    friend std::ostream& operator<<(std::ostream& out, const Person& p);

    void calculateFinalGrade(bool useMedian);
    void generateRandomScores(int hwCount);

    double getFinalGrade() const { return finalGrade; }
    std::string getFirstName() const { return firstName; }
    std::string getSurname() const { return surname; }
};

#endif
