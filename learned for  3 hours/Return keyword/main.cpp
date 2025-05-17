#include <iostream>

// double square(double length);
// double cube(double length);
std::string concatStrings(std::string string1, std::string string2);

int main()
{
    std::string firstName = "Bro";
    std::string lastName = "Code";

    std::cout << "Hello "<<concatStrings(firstName, lastName); 

    /*double length = 6.0;
    std::cout << "The square's area is: " << square(length) << "cm²\n";
    std::cout << "The square's area is: " << cube(length) << "cm³\n";

    return 0;
}
double square(double length)
{
    return length * length;
}
double cube(double length)
{
    return length * length* length;*/
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}
