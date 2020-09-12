#include <iostream>
#include "main.h"
using namespace std;

//*********************************************
//Point Constructor
//*********************************************
Point::Point(double x, double y) : xValue(x), yValue(y) {}

//*********************************************
//getX returns x coordinate
//*********************************************
double Point::getX() const{
    return xValue;
}
//*********************************************
//getY returns y coordinate
//*********************************************
double Point::getY() const{
    return yValue;
}
//*********************************************
//Rectangle Constructor
//*********************************************
Rectangle::Rectangle(int l, int w, double x, double y) : length(l), width(w), topLeft(Point(x, y)) {}

//*********************************************
//getLength returns value to length
//*********************************************
int Rectangle::getLength() const
{
    return length;
}
//*********************************************
//getWidth returns value to width
//*********************************************
int Rectangle::getWidth() const
{
    return width;
}

//*********************************************
//
//*********************************************
void intersect(Rectangle r1, Rectangle r2) {
    if (r1.topLeft.getX() < r2.topLeft.getX() + r2.getWidth() &&
        r1.topLeft.getX() + r1.getWidth() > r2.topLeft.getX() &&
        r1.topLeft.getY() < r2.topLeft.getY() + r2.getLength() &&
        r1.topLeft.getY() + r1.getLength() > r2.topLeft.getY())
        cout << "Collision Detected\n";
    else {
        cout << "No Collision Detected\n";
    }
    return;
}
//*********************************************
//
//*********************************************
Rectangle makeRect(const char *id)
{
    int l, w; // a is length & b is width
    double x, y; // x is x-coordinate & y is y-coordinate
    cout << "Enter width of rectangle: " << id << "\n";
    cin >> w;
    cout << "Enter length of the rectangle: " << id << "\n";
    cin >> l;
    cout << "Enter the top left x coordinate: " << id << "\n";
    cin >> x;
    cout << "Enter the top left y-coordinate: " << id << "\n";
    cin >> y;

    return Rectangle(l, w, x, y);
}

int main()
{
    cout << "This program will take inputs for two rectangles and inform if they intersect" << endl;
    Rectangle r1 = makeRect("1");// instance of rectangle class
    Rectangle r2 = makeRect("2");
    intersect(r1,r2);
    return 0;
}