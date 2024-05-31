#include<iostream>
using namespace std;
class Shape {
public:
virtual double getArea() = 0;
};
class Triangle : public Shape {
private:
double base, height;
public:
Triangle(double b, double h) : base(b), height(h) {}
double get {
return 0.5 * base * height;
}
};
class Square : public Shape
double side;
public:
Square(double s) : side(s) {}
double getArea() {
return side * side;
}
};
class Rectangle : public Shape {
private:
double width, height;
public:
Rectangle(double w, double h) : width(w), height(h) {}
double getArea() {
return width * height;
}
};

int main() {
Triangle t(5.0, 6.0);
Square s(4.0);
Rectangle r(4.0, 5.0);

cout << "Area of Triangle: " << t.getArea() << endl;
cout << "Area of Square: " << s.getArea() << endl;
cout << "Area of Rectangle: " << r.getArea() << endl;

return 0;
}
