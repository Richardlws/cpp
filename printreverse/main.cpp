#include <iostream>
void printReverse(const char *str){
    std::cout<<"1."<<str<<"\n";
    std::cout<<"2."<<*str<<"\n";

    if(*str == '\0')return;
    printReverse(str+1);
    std::cout<<*str;
}
int main(){
    const char*word="hello";
    std::cout<<word<<"\n";
    std::cout<<"Original: "<<word<<"\n";
    std::cout<<"Reversed: ";
    printReverse(word);
    std::cout<<"\n";
    return 0;

}