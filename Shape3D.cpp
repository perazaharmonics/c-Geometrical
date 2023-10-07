#pragma once


#include "Shape3D.h"
#include <cmath>

Sphere::Sphere(double radius) : radius_(radius) {}

std::string Sphere::getName() const {
    return "Sphere";
}

double Sphere::getSurfaceArea() const {
    return 4 * 3.14159 * radius_ * radius_;
}

double Sphere::getVolume() const {
    return 4.0 / 3.0 * 3.14159 * radius_ * radius_ * radius_;
}

Cube::Cube(double side) : side_(side) {}

std::string Cube::getName() const {
    return "Cube";
}

double Cube::getSurfaceArea() const {
    return 6 * side_ * side_;
}

double Cube::getVolume() const {
    return side_ * side_ * side_;
}

Cuboid::Cuboid(double length, double width, double height) : length_(length), width_(width), height_(height) {}

std::string Cuboid::getName() const {
    return "Cuboid";
}

double Cuboid::getSurfaceArea() const {
    return 2 * (length_ * width_ + width_ * height_ + height_ * length_);
}

double Cuboid::getVolume() const {
    return length_ * width_ * height_;
}



RightCircularCone::RightCircularCone(double radius, double height) : radius_(radius), height_(height) {}

std::string RightCircularCone::getName() const {
	return "Right Circular Cone";
}

double RightCircularCone::getSurfaceArea() const {
	double slant_height = sqrt(radius_ * radius_ + height_ * height_);
	return 3.14159 * radius_ * (radius_ + slant_height);
}

double RightCircularCone::getVolume() const {
	return (1.0 / 3.0) * 3.14159 * radius_ * radius_ * height_;
}


RightCircularCylinder::RightCircularCylinder(double radius, double height) : radius_(radius), height_(height) {}

std::string RightCircularCylinder::getName() const {
	return "Right Circular Cylinder";
}

double RightCircularCylinder::getSurfaceArea() const {
	return 2 * 3.14159 * radius_ * (radius_ + height_);
}

double RightCircularCylinder::getVolume() const {
	return 3.14159 * radius_ * radius_ * height_;
}



Tetrahedron::Tetrahedron(double edgle_length_) : edge_length_(edge_length_) {}

std::string Tetrahedron::getName() const {
	return "Tetrahedron";
}

double Tetrahedron::getSurfaceArea() const {
	return sqrt(3) * edge_length_ * edge_length_;
}

double Tetrahedron::getVolume() const {
	return (edge_length_ * edge_length_ * edge_length_) / (6 * sqrt(2));
}



