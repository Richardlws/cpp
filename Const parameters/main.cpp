#include <iostream>
void printInfo(const std::string &name,const int &age);
int main(){

    std::string name="Bro";
    int age = 21;

    printInfo(name,age);
    return 0;
}
void printInfo(const std::string &name,const int &age){
    //name=" ";
    //age=0;
    std::cout<<name<<"\n";
    std::cout<<age<<"\n";
}