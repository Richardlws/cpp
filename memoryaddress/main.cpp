#include <iostream>
int main()
{
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}
