#ifndef MAIN_H
#define MAIN_H


class Point {
public:
    Point(double x, double y);

private:
    double xValue;
    double yValue;
};


class Rectangle{
public:
    Rectangle(int length, int width, double x, double y);
    int getLength() const;
    int getWidth() const;
private:
    int length;
    int width;
    Point topLeft;
};

#endif