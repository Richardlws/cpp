#include <iostream>
int main(){
    std::string cars[][3]={{"Mustang","Escape","F-150"},
                          {"Covette","Equinox","Silverado"},
                          {"Challenger","Durango","Ram 1500"}};
    //for(std::string car:cars){
    //    std::cout<<car<<" ";
    //}
    std::cout<<sizeof(std::string)<<"\n";
    std::cout<<sizeof(cars)<<"\n";
    std::cout<<sizeof(cars[0])<<"\n";
    for(int i=0;i<sizeof(cars[0])/sizeof(cars[0][0]);i++){
        for(int j=0;j<sizeof(cars)/sizeof(cars[0]);j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}