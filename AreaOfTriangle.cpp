#include <iostream>
#include <cmath>
/*
using namespace std;

class Triangle {
private:
    double base;
    double height;
    
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    
    double calculateArea() {
        return 0.5 * base * height;
    }
};

int main() {
    double b, h;
    
    cout << "Enter base of triangle: ";
    cin >> b;
    cout << "Enter height of triangle: ";
    cin >> h;
    
    Triangle tri(b, h);
    
    cout << "Area of triangle: " << tri.calculateArea() << endl;
    
    return 0;
}
*/

using namespace std;

class Triangle {
private:
    float area;
    
public:
   
    Triangle(float b, float h) {
        area = 0.5 * b * h;
        cout << "Area = " << area << " sq units" << endl;
    }
    

    Triangle(float a, float b, float c) {
        float s = (a + b + c) / 2;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        cout << "Area = " << area << " sq units" << endl;
    }
    

    Triangle(float side) {
        area = (sqrt(3) / 4) * side * side;
        cout << "Area = " << area << " sq units" << endl;
    }
};

int main() {
    int choice;
    
    cout << "1. Base & Height\n2. Three sides\n3. Equilateral triangle\nEnter choice: ";
    cin >> choice;
    
    if(choice == 1) {
        float b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        Triangle t(b, h);
    }
    else if(choice == 2) {
        float a, b, c;
        cout << "Enter three sides: ";
        cin >> a >> b >> c;
        Triangle t(a, b, c);
    }
    else if(choice == 3) {
        float s;
        cout << "Enter side: ";
        cin >> s;
        Triangle t(s);
    }
    else {
        cout << "Invalid choice!";
    }
    
    return 0;
}
