#include <iostream>
int main(){

    std::string students[]={"Spongebob","Patrick","Squidward"};
    char grades[]={'A','B','C','D','E'};
    
    for(std::string student:students){
        std::cout<<student<<"\n";
    };
    for(int i=0;i<sizeof(students)/sizeof(std::string);i++){
        std::cout<<students[i]<<"\n";
    }
    for(int j=0;j<sizeof(grades)/sizeof(char);j++){
        std::cout<<grades[j]<<"\n";
    }
    


    return 0;
}