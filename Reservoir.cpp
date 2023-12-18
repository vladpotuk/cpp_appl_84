#include "Reservoir.h"
#include <iostream>

Reservoir::Reservoir(const std::string& name) : name(name), width(0.0), length(0.0), maxDepth(0.0) {}

Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

Reservoir::~Reservoir() {
    std::cout << "Об'єкт " << name << " видалено\n";
}

Reservoir::Reservoir(const Reservoir& other) : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {
    std::cout << "Створено копію об'єкта " << name << "\n";
}

double Reservoir::calculateVolume() const {
    return width * length * maxDepth;
}

double Reservoir::calculateSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    
    return name == other.name;
}

bool Reservoir::operator<(const Reservoir& other) const {
    return calculateSurfaceArea() < other.calculateSurfaceArea();
}

void Reservoir::setName(const std::string& name) {
    this->name = name;
}

std::string Reservoir::getName() const {
    return name;
}

void Reservoir::setWidth(double width) {
    this->width = width;
}

double Reservoir::getWidth() const {
    return width;
}

void Reservoir::setLength(double length) {
    this->length = length;
}

double Reservoir::getLength() const {
    return length;
}

void Reservoir::setMaxDepth(double maxDepth) {
    this->maxDepth = maxDepth;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}


void Reservoir::displayInfo() const {
    std::cout << "Назва: " << name << ", Ширина: " << width << ", Довжина: " << length << ", Максимальна глибина: " << maxDepth << "\n";
}
