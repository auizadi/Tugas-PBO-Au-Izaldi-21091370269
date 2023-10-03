#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:  // private section
   // private data members
   int hour;     // 0 - 23
   int minute;   // 0 - 59
   int second;   // 0 - 59
 
public:   // public section
   // public member function prototypes
   Time(int h = 0, int m = 0, int s = 0); // Constructor with default values
   int getHour() const;   // public getter for private data member hour
   void setHour(int h);   // public setter for private data member hour
   int getMinute() const; // public getter for private data member minute
   void setMinute(int m); // public setter for private data member minute
   int getSecond() const; // public getter for private data member second
   void setSecond(int s); // public setter for private data member second
   void setTime(int h, int m, int s);   // set hour, minute and second
   void print() const; // Print a description of this instance in "hh:mm:ss"
   void nextSecond();  // Increase this instance by one second
};  

Time::Time(int h, int m, int s) {
   hour = h;
   minute = m;
   second = s;
}
 
// public getter for private data member hour
int Time::getHour() const {
   return hour;
}
 
// public setter for private data member hour. No input validation
void Time::setHour(int h) {
   hour = h;
}
 
// public getter for private data member minute
int Time::getMinute() const {
   return minute;
}
 
// public setter for private data member minute. No input validation
void Time::setMinute(int m) {
   minute = m;
}
 
// public getter for private data member second
int Time::getSecond() const {
   return second;
}
 
// public setter for private data member second. No input validation
void Time::setSecond(int s) {
   second = s;
}
 
// Set hour, minute and second. No input validation
void Time::setTime(int h, int m, int s) {
   hour = h;
   minute = m;
   second = s;
}
 
// Print this Time instance in the format of "hh:mm:ss", zero filled
void Time::print() const {
   cout << setfill('0');    // zero-filled, need <iomanip>, sticky
   cout << setw(2) << hour  // set width to 2 spaces, need <iomanip>, non-sticky
        << ":" << setw(2) << minute
        << ":" << setw(2) << second << endl;
}
 
// Increase this instance by one second
void Time::nextSecond() {
   ++second;
   if (second >= 60) {
      second = 0;
      ++minute;
   }
   if (minute >= 60) {
      minute = 0;
      ++hour;
   }
   if (hour >= 24) {
      hour = 0;
   }
}

int main(){


Time t1(23, 59, 59);   // Test constructor
 
   // Test all public member functions
   t1.print();       // 23:59:59
   t1.setHour(12);
   t1.setMinute(30);
   t1.setSecond(15);
   t1.print();       // 12:30:15
   cout << "Hour is "   << t1.getHour()   << endl;
   cout << "Minute is " << t1.getMinute() << endl;
   cout << "Second is " << t1.getSecond() << endl;
 
   Time t2;     // Test constructor with default values for hour, minute and second
   t2.print();  // 00:00:00
   t2.setTime(1, 2, 3);
   t2.print();  // 01:02:03
 
   Time t3(12); // Use default values for minute and second
   t3.print();  // 12:00:00
 
   // Test nextSecond()
   Time t4(23, 59, 58);
   t4.print();
   t4.nextSecond();
   t4.print();
   t4.nextSecond();
   t4.print();
 
   // No input validation
   Time t5(25, 61, 99); // values out of range
   t5.print();  // 25:61:99

}