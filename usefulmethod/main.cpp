#include <iostream>
#include <string>
int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*if (name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    }

   if(name.empty()){
        std::cout<<"You didn't enter your name";
   }
   else{
        std::cout<<"Hello "<<name;
   }*/
   name.append("@gmail.com");
   std::cout<<"Your username is now "<<name;

    return 0;
}
