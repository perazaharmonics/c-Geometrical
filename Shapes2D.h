
#include <string>
#include <memory>
#include "ShapeFactory.h"

class Shapes2D {
public:
    virtual ~Shapes2D() {}
    virtual std::string getName() const = 0;
    virtual double getArea() const = 0;
};

class Rectangle : public Shapes2D {
public:
    Rectangle(double width, double height);
    std::string getName() const override;
    double getArea() const override;
private:
    double width_;
    double height_;
};

class Square : public Shapes2D {
public:
    Square(double side);
    std::string getName() const override;
    double getArea() const override;
private:
    double side_;
};

class RightTriangle : public Shapes2D {
public:
    RightTriangle(double base, double height);
    std::string getName() const override;
    double getArea() const override;
private:
    double base_;
    double height_;
};

class Trapezoid : public Shapes2D {
public:
    Trapezoid(double base1, double base2, double height);
    std::string getName() const override;
    double getArea() const override;
private:
    double base1_;
    double base2_;
    double height_;
};

