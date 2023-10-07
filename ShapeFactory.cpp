#include "ShapeFactory.h"
#include "Shapes2D.h"
#include "Shape3D.h"

std::unique_ptr<Shapes2D> ConcreteShapeFactory::create2DShape(const std::string& shapeType, double arg1, double arg2, double arg3) {
    if (shapeType == "Rectangle") {
		return std::make_unique<Rectangle>(arg1, arg2);
	}
    else if (shapeType == "Square") {
		return std::make_unique<Square>(arg1);
	}
    else if (shapeType == "RightTriangle") {
		return std::make_unique<RightTriangle>(arg1, arg2);
	}
    else if (shapeType == "Trapezoid") {
		return std::make_unique<Trapezoid>(arg1, arg2, arg3);
	}
    else {
		return nullptr;
	}
}
std::unique_ptr<Shape3D> ConcreteShapeFactory::create3DShape(const std::string& shapeType, double arg1, double arg2, double arg3) {
    if (shapeType == "Sphere") {
        return std::make_unique<Sphere>(arg1);
    }
    else if (shapeType == "Cube") {
        return std::make_unique<Cube>(arg1);
    }
    else if (shapeType == "Cuboid") {
        return std::make_unique<Cuboid>(arg1, arg2, arg3);
    }
    
    else if (shapeType == "Right Circular Cone") {
        return std::make_unique<RightCircularCone>(arg1, arg2);

    }

    else if (shapeType == "Right Circular Cylinder") {
        return std::make_unique<RightCircularCylinder>(arg1, arg2);

    }
    else if (shapeType == "Tetrahedron") {
		return std::make_unique<Tetrahedron>(arg1);

	}

    else {
        return nullptr;
    }
}
