#pragma once
#include <string>

class Shape3D {
public:
    virtual ~Shape3D() {}
    virtual std::string getName() const = 0;
    virtual double getSurfaceArea() const = 0;
    virtual double getVolume() const = 0;
};

class Sphere : public Shape3D {
public:
    Sphere(double radius);
    std::string getName() const override;
    double getSurfaceArea() const override;
    double getVolume() const override;
private:
    double radius_;
};

class Cube : public Shape3D {
public:
    Cube(double side);
    std::string getName() const override;
    double getSurfaceArea() const override;
    double getVolume() const override;
private:
    double side_;
};

class Cuboid : public Shape3D {
public:
    Cuboid(double length, double width, double height);
    std::string getName() const override;
    double getSurfaceArea() const override;
    double getVolume() const override;
private:
    double length_;
    double width_;
    double height_;
};

class RightCircularCone : public Shape3D {
public:
    RightCircularCone(double radius, double height);
    std::string getName() const override;
    double getSurfaceArea() const override; 
    double getVolume() const override;
private:
    double radius_;
    double height_;
};

class RightCircularCylinder : public Shape3D {
public:
    RightCircularCylinder(double radius, double height);
    std::string getName() const override;
    double getSurfaceArea() const override;
    double getVolume() const override;
private:
    double radius_;
    double height_;
};

class Tetrahedron : public Shape3D {
public:
    Tetrahedron(double edge_length);
    std::string getName() const override;
    double getSurfaceArea() const override;
    double getVolume() const override;
private:
    double edge_length_;
};
