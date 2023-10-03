#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class Point {
private:
   // private data members (variables)
   int x;
   int y;
 
public:
   // Declare member function prototypes
   Point(int x = 0, int y = 0);  // Constructor with default values
   int getX() const;
   void setX(int x);
   int getY() const;
   void setY(int y);
   void setXY(int x, int y);
   double getMagnitude() const;
   double getArgument() const;
   void print() const;
};
Point::Point(int x, int y) : x(x), y(y) { }  // Use member initializer list
 
// Public getter for private data member x
int Point::getX() const {
   return x;
}
 
// Public setter for private data member x
void Point::setX(int x) {
   this->x = x;
}
 
// Public getter for private data member y
int Point::getY() const {
   return y;
}
 
// Public setter for private data member y
void Point::setY(int y) {
   this->y = y;
}
 
// Public member function to set both x and y
void Point::setXY(int x, int y) {
   this->x = x;
   this->y = y;
}
 
// Public member function to return the magitude
double Point::getMagnitude() const {
   return sqrt(x*x + y*y);    // sqrt in <cmath>
}
 
// Public member function to return the argument
double Point::getArgument() const {
   return atan2(y, x);    // atan2 in <cmath>
}
 
// Public member function to print description about this point
void Point::print() const {
   cout << "(" << x << "," << y << ")" << endl;
}
int main(){
Point p1(3, 4);
   p1.print();
   cout << "x = " << p1.getX() << endl;
   cout << "y = " << p1.getY() << endl;
   cout << fixed << setprecision(2);
   cout << "mag = " << p1.getMagnitude() << endl;
   cout << "arg = " << p1.getArgument() << endl;
   p1.setX(6);
   p1.setY(8);
   p1.print();
   p1.setXY(1, 2);
   p1.print();
 
   // Construct an instance of Point using default constructor
   Point p2;
   p2.print();
}