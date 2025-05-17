#include <iostream>
// void walk(int steps);
int factorial(int num);
int main()
{
    std::cout << factorial(6);
    return 0;
}
int factorial(int num)
{
    return (num <= 1) ? 1 : num * factorial(num - 1);
}
/*{
    return 1;
}else{
    return num*factorial(num-1);
}

/*int result =1;
for(int i=1;i<=num;i++){
    result=result*i;
}
return result;*/


/*void walk(int steps)
{
    /*for(int i= 0;i<steps;i++){

        std::cout<<"You take a step!\n";
    }
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}*/