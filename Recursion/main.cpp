#include <iostream>
void walk(int steps);
int main()
{

    walk(10);
    return 0;
}
void walk(int steps)
{
    /*for(int i= 0;i<steps;i++){

        std::cout<<"You take a step!\n";
    }*/
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}