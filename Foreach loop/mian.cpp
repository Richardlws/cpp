#include <iostream>
int main(){
    std::string names[]={"Spongebob","Patrick","Squidward"};
    int grades[]={65,72,81,93};
    for(std::string name:names){
        std::cout<<name<<"\n";
    }
    for(int grade:grades){
        std::cout<<grade<<"\n";
    }


    return 0;
}