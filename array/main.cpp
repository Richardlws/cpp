#include <iostream>
int main()
{

    std::string car[] = {"Corvette", "Mustang", "Camry"};
    
    car[0]="Camaro";

    for (int i = 0; i < 3; i++)
    {
        std::cout << car[i] << "\n";
    }
    return 0;
}