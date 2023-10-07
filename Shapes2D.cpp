#include "Shapes2D.h"
#include <cmath>

// Implementation for Rectangle2D

Rectangle::Rectangle(double width, double height) : width_(width), height_(height) {}

std::string Rectangle::getName() const {
    return "Rectangle";
}

double Rectangle::getArea() const {
    return width_ * height_;
}

// Implementation for Square2D

Square::Square(double side) : side_(side) {}

std::string Square::getName() const {
    return "Square";
}

double Square::getArea() const {
    return side_ * side_;
}

// Implementation for RightTriangle2D

RightTriangle::RightTriangle(double base, double height) : base_(base), height_(height) {}

std::string RightTriangle::getName() const {
    return "Right Triangle";
}

double RightTriangle::getArea() const {
    return 0.5 * base_ * height_;
}

// Implementation for Trapezoid2D

Trapezoid::Trapezoid(double base1, double base2, double height) : base1_(base1), base2_(base2), height_(height) {}

std::string Trapezoid::getName() const {
    return "Trapezoid";
}

double Trapezoid::getArea() const {
    return 0.5 * (base1_ + base2_) * height_;
}

