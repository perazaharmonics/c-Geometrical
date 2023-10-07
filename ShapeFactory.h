#pragma once
#include <memory>
#include <string>

class Shapes2D;
class Shape3D;

class ShapeFactory {
public:
    virtual ~ShapeFactory() {}
    virtual std::unique_ptr<Shapes2D> create2DShape(const std::string& shapeType, double arg1, double arg2 = 0, double arg3 = 0) = 0;
    virtual std::unique_ptr<Shape3D> create3DShape(const std::string& shapeType, double arg1, double arg2 = 0, double arg3 = 0) = 0;
};

class ConcreteShapeFactory : public ShapeFactory {
public:
    std::unique_ptr<Shapes2D> create2DShape(const std::string& shapeType, double arg1, double arg2 = 0, double arg3 = 0) override;
    std::unique_ptr<Shape3D> create3DShape(const std::string& shapeType, double arg1, double arg2 = 0, double arg3 = 0) override;
};
