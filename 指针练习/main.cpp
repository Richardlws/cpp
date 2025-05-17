#include <iostream>
int main()
{
    void printSpaces(char *spaces);
    /*int *p;
    int x = 123;
    p = &x;
    int y=x;

    std::cout << "X's value: " << x << "\n";
    std::cout << "X's address: " << p << "\n";
    std::cout << "X's value is: " << *p << "\n";
    std::cout<<"Y's address:"<<&y<<"\n";
    std::cout<<"Y's value: "<<y<<'\n';
    std::cout<<p<<"\n";
    std::cout<<*p<<"\n";*/

    char spaces[]="richard";
    //std::cout<<spaces<<"\n";
    //std::cout<<spaces[0]<<"\n";
    printSpaces(spaces);


}
void printSpaces(char *spaces){
    std::cout<<spaces<<"\n";
}