#include <iostream>
inline float mul(float x, float y)
{
return (x * y);
}
inline double div(double p, double q) {
return (p / q);
}
int main() {
float a = 5.5;
float b = 2.0;
double c = 10.0;
double d = 3.0;
std::cout << "Multiplication: " << mul(a, b) << std::endl;
std::cout << "Division: " << div(c, d) << std::endl;
return 0;
}