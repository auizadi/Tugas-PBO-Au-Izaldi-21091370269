#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
    double radius;
    string color;

public:
    // Deklarasi constructor di dalam kelas, tidak perlu kualifikasi Circle::
    Circle(double radius = 1.0, string color = "red");

    // Deklarasi getter dan setter
    double getRadius() const;
    void setRadius(double radius);
    string getColor() const;
    void setColor(string color);

    // Deklarasi member function
    double getArea() const;
};

// Implementasi constructor di luar kelas
Circle::Circle(double r, string c) {
    radius = r;
    color = c;
}

// Implementasi getter dan setter
double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

string Circle::getColor() const {
    return color;
}

void Circle::setColor(string c) {
    color = c;
}

// Implementasi member function
double Circle::getArea() const {
    return radius * radius * 3.14159265;
}

int main() {
    Circle c1(1.2, "red");
    cout << "Radius = " << c1.getRadius() << " Area = " << c1.getArea() << " Color = " << c1.getColor() << endl;

    c1.setRadius(2.1); // Mengubah radius dan warna c1
    c1.setColor("blue");
    cout << "Radius = " << c1.getRadius() << " Area = " << c1.getArea() << " Color = " << c1.getColor() << endl;

    Circle c2;
    cout<<"Radius = "<<c2.getRadius()<< " Area = "<<c2.getArea()<<" Color = "<<c2.getColor()<<endl;   
    return 0;
}
