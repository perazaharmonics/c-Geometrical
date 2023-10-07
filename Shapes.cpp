#include <memory>
#include <string>
#include <iostream>
#include <iomanip>
#include "ShapeFactory.h"
#include "Shapes2D.h"
#include "Shape3D.h"

void displayShapeMenu() {
    std::cout << "Select a shape:" << std::endl;
    std::cout << "1. Rectangle" << std::endl;
    std::cout << "2. Square" << std::endl;
    std::cout << "3. Right Triangle" << std::endl;
    std::cout << "4. Trapezoid" << std::endl;
    std::cout << "5. Sphere" << std::endl;
    std::cout << "6. Cube" << std::endl;
    std::cout << "7. Cuboid" << std::endl;
    std::cout << "8. Right Circular Cone" << std::endl;
    std::cout << "9. Right Circular Cilinder" << std::endl;
    std::cout << "10. Tetrahedron" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

int main() {
    ConcreteShapeFactory factory; // Create an instance of ConcreteShapeFactory

    while (true) {
        displayShapeMenu();
        int choice;
        std::cout << "Enter your choice (0 to exit): ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Exit the program
        }

        std::unique_ptr<Shapes2D> shape2D;
        std::unique_ptr<Shape3D> shape3D;

        switch (choice) {
        case 1: { // Rectangle
            double width, height;
            std::cout << "Enter width: ";
            std::cin >> width;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape2D = factory.create2DShape("Rectangle", width, height);
            break;
        }
        case 2: { // Square
            double side;
            std::cout << "Enter side length: ";
            std::cin >> side;
            shape2D = factory.create2DShape("Square", side);
            break;
        }
        case 3: { // Right Triangle
            double base, height;
            std::cout << "Enter base length: ";
            std::cin >> base;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape2D = factory.create2DShape("Right Triangle", base, height);
            break;
        }
        case 4: { // Trapezoid
            double base1, base2, height;
            std::cout << "Enter length of base 1: ";
            std::cin >> base1;
            std::cout << "Enter length of base 2: ";
            std::cin >> base2;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape2D = factory.create2DShape("Trapezoid", base1, base2, height);
            break;
        }
        case 5: { // Sphere
            double radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            shape3D = factory.create3DShape("Sphere", radius);
            break;
        }
        case 6: { // Cube
            double side;
            std::cout << "Enter side length: ";
            std::cin >> side;
            shape3D = factory.create3DShape("Cube", side);
            break;
        }
        case 7: { // Cuboid
            double length, width, height;
            std::cout << "Enter length: ";
            std::cin >> length;
            std::cout << "Enter width: ";
            std::cin >> width;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape3D = factory.create3DShape("Cuboid", length, width, height);
            break;
        }
        case 8: { // Right Circular Cone
            double radius, height;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape3D = factory.create3DShape("Right Circular Cone", radius, height);
            break;
        }
        case 9: { // Right Circular Cylinder
            double radius, height;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            std::cout << "Enter height: ";
            std::cin >> height;
            shape3D = factory.create3DShape("Right Circular Cylinder", radius, height);
            break;
        }
        case 10: { // Tetrahedron
            double edge_length;
            std::cout << "Enter edge length: ";
            std::cin >> edge_length;
            shape3D = factory.create3DShape("Tetrahedron", edge_length);
            break;
        }
     
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
        }

        if (shape2D) {
            double area = shape2D->getArea();
            std::cout << "Area: " << std::fixed << std::setprecision(2) << area << std::endl;
        }

        else if (shape3D) {
            double surfaceArea = shape3D->getSurfaceArea();
            double volume = shape3D->getVolume();
            std::cout << "Surface Area: " << std::fixed << std::setprecision(2) << surfaceArea << std::endl;
            std::cout << "Volume: " << std::fixed << std::setprecision(2) << volume << std::endl;
        }

    }

    return 0;
}
