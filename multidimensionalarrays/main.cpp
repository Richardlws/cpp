#include <iostream>
int main(){
    std::string cars[][3]={{"Mustang","Escape","F-150"},
                          {"Covette","Equinox","Silverado"},
                          {"Challenger","Durango","Ram 1500"}};
    for(std::string car:cars[0]){
        std::cout<<car<<"\n";
    }

    return 0;
}