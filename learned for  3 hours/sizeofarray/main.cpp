#include <iostream>
int main(){
    double gpa = 2.5;
    std::string name="Bro";
    char grade='F';
    bool student = true;
    char grades[]={'A','B','C','D','E','F'};
    std::string students[]={"Spongebob","Patrick","Squidward","Sandy"};

    std::cout<<sizeof(double)<<" bytes\n";
    std::cout<<sizeof(std::string)<<" bytes\n";
    std::cout<<sizeof(char)<<" bytes\n";
    std::cout<<sizeof(bool)<<" bytes\n";
    std::cout<<sizeof(grades)<<" bytes\n";
    std::cout<<sizeof(grades)/sizeof(char)<<" elements\n";
    std::cout<<sizeof(students)/sizeof(std::string)<<" elements\n";

    return 0;

}