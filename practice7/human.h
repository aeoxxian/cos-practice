#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
private:
    std::string name;
    int age;
    double height;
    double weight;

public:
    Human();
    Human(std::string name, int age, double height, double weight);

    const std::string& getName() const;
    int getAge() const;
    double getHeight() const;
    double getWeight() const;

    void setName(const std::string& newName);
    void setAge(int newAge);
    void setHeight(double newHeight);
    void setWeight(double newWeight);

    void printInfo() const;
};

#endif
