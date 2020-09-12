#ifndef MAIN_H
#define MAIN_H


class Point {
public:
    Point(double x, double y);
    double getX() const;
    double getY() const;
private:
    double xValue;
    double yValue;

};


class Rectangle{
public:
    Rectangle(int length, int width, double x, double y);
    int getLength() const;
    int getWidth() const;
    Point topLeft;
    void intersect(Rectangle r1, Rectangle r2) const;

private:
    int length;
    int width;
};

#endif