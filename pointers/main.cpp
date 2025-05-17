#include <iostream>
int main()
{
    std::string name = "Bro";
    std::string *pName = name;
    std::cout<<pName;

    return 0;
}