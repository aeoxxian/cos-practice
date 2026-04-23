#include "human.h"

Human::Human() : name("Unknown"), age(0), height(0.0), weight(0.0) {}

Human::Human(std::string name, int age, double height, double weight)
    : name(std::move(name)), age(age), height(height), weight(weight) {}

const std::string& Human::getName() const { return name; }
int Human::getAge() const { return age; }
double Human::getHeight() const { return height; }
double Human::getWeight() const { return weight; }

void Human::setName(const std::string& newName) { name = newName; }
void Human::setAge(int newAge) { age = newAge; }
void Human::setHeight(double newHeight) { height = newHeight; }
void Human::setWeight(double newWeight) { weight = newWeight; }

void Human::printInfo() const {
    std::cout << "Name   : " << name << '\n';
    std::cout << "Age    : " << age << '\n';
    std::cout << "Height : " << height << '\n';
    std::cout << "Weight : " << weight << '\n';
}
