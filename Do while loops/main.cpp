#include <iostream>
int main()
{
    int number;
    /*std::cout << "Enter a positive #: ";
    std::cin >> number;
    while (number < 0)
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }
    std::cout << "The # is: " << number;*/
    do
    {
        std::cout << "Enter a positive #:";
        std::cin>>number;
    } while (number < 0);
    std::cout << "The # is: " << number;

    return 0;
}