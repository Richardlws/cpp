#include <iostream>
class Human{
    public:
        std::string name="Rick";
        std::string occupation="scientist";
        int age=70;

        void eat(){
            std::cout<<"This person is eating\n";
        }
        void drink(){
            std::cout<<"This person is drinking\n";
        }
        void sleep(){
            std::cout<<"This person is sleeping\n";
        }

};

class Car{
    public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate(){
        std::cout<<"You step on the gas!\n";
    }
    void brake(){
        std::cout<<"You step on the brakes!\n";
    }
};
int main(){
    Human human1;
    Human human2;
    Human human3;
    Car car1;
    car1.make="Ford";
    car1.model="Mustang";
    car1.year=2023;
    car1.color="silver";

    car1.accelerate();
    car1.brake();

    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.color<<'\n';

    human1.name="Rick";
    human1.occupation="scientist";
    human1.age=70;
    
    human2.name="Morty";
    human2.occupation="student";
    human2.age=15;

    std::cout<<human1.name<<'\n';
    std::cout<<human1.occupation<<'\n';
    std::cout<<human1.age<<'\n';

    std::cout<<human2.name<<'\n';
    std::cout<<human2.occupation<<'\n';
    std::cout<<human2.age<<'\n';

    std::cout<<human3.name<<'\n';
    std::cout<<human3.occupation<<'\n';
    std::cout<<human3.age<<'\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    human3.eat();
    human3.drink();
    human3.sleep();

    return 0;
}