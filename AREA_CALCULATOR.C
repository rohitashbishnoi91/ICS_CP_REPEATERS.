#include <stdio.h>
#include <math.h>



float calculateCircleArea(float radius) {
    return M_PI * radius * radius;
}



float calculateEllipseArea(float majorAxis, float minorAxis) {
    return M_PI * majorAxis * minorAxis;
}

float calculateParallelogramArea(float base, float height) {
    return base * height;
}

int main() {
    int choice;
    
    do {
        // Display menu
        printf("\nGeometry Area Calculator\n");
        printf("1. Rectangle\n");
        printf("2. Square\n");
        printf("3. Circle\n");
        printf("4. Triangle\n");
        printf("5. Trapezoid\n");
        printf("6. Ellipse\n");
        printf("7. Parallelogram\n");
        printf("8. Exit\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                float length, width;
                printf("Enter length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                printf("Area of Rectangle: %.2f\n", calculateRectangleArea(length, width));
                break;
            }
            case 2: {
                float side;
                printf("Enter the side length of the square: ");
                scanf("%f", &side);
                printf("Area of Square: %.2f\n", calculateSquareArea(side));
                break;
            }
            case 3: {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                printf("Area of Circle: %.2f\n", calculateCircleArea(radius));
                break;
            }
            case 4: {
                float base, height;
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                printf("Area of Triangle: %.2f\n", calculateTriangleArea(base, height));
                break;
            }
            case 5: {
                float base1, base2, trapezoidHeight;
                printf("Enter the lengths of the two bases and the height of the trapezoid: ");
                scanf("%f %f %f", &base1, &base2, &trapezoidHeight);
                printf("Area of Trapezoid: %.2f\n", calculateTrapezoidArea(base1, base2, trapezoidHeight));
                break;
            }
            case 6: {
                float majorAxis, minorAxis;
                printf("Enter the lengths of the major and minor axes of the ellipse: ");
                scanf("%f %f", &majorAxis, &minorAxis);
                printf("Area of Ellipse: %.2f\n", calculateEllipseArea(majorAxis, minorAxis));
                break;
            }
            case 7: {
                float base, parallelogramHeight;
                printf("Enter the base and height of the parallelogram: ");
                scanf("%f %f", &base, &parallelogramHeight);
                printf("Area of Parallelogram: %.2f\n", calculateParallelogramArea(base, parallelogramHeight));
                break;
            }
            case 8: {
                printf("Exiting the program. Goodbye!\n");
                break;
            }
            default: {
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
            }
        }
    } while (choice != 8);

    return 0;
}



