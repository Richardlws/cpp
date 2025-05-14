#include <iostream>
int main(){
    /*for(int i=1;i<=3;i++){
        for(int j = 1;j<=10;j++){
            
            std::cout<<j<<' ';
        }
        std::cout<<'\n';
    }*/
   int rows;
   int columns;
   char symbol;

   std::cout<<"Please enter the symbol: ";
   std::cin>>symbol;
   std::cout<<"Please enter the rows: ";
   std::cin>>rows;
   std::cout<<"Please enter the columns: ";
   std::cin>>columns;

   for (int i=1;i<=rows;i++){
        for(int j = 1;j<=columns;j++){
            std::cout<<symbol;
        }
        std::cout<<'\n';
   }
    return 0;
}