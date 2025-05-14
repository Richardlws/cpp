#include <iostream>

double square(double length);

int main()
{

    double length = 5.0;
    std::cout << "The square's area is: " << square(length) << "cm^2";

    return 0;
}
double square(double length)
{
    return length * length;
}