#include <iostream>
int main()
{
    int temp;
    bool sunny = true;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    /*if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!";
    }
    else{
        std::cout<<"The temperature is bad!";
    }*/

    if (temp < 21 || temp > 30)
    {
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout<<"The temperature is good!\n";
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!\n";
    }
    else{
        std::cout<<"It is sunny outside!\n";
    }

    return 0;
}