#include <iostream>
/*class Animal{

    public:
        bool alive = true;
    void eat(){
        std::cout<<"This animal is eating\n";
    }
};

class Dog{
    public:
    void bark(){
        std::cout<<"The dog goes woof!\n";
    }
    void eat(){
        std::cout<<"NOM NOM NOM\n";
    }
};

class Cat:public Animal{
    public:
    void meow(){
        std::cout<<"The cat goes meow!\n";
    }

};

int main(){
    Dog dog;
    Cat cat;
    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();
    cat.eat();
    cat.meow();

    return 0;

}*/
class Shape{
    public:
        double area;
        double volume;

};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side=side;
        this->area = side*side*6;
        this->volume=side*side*side;

    }


};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius=radius;
        this->area= 4*3.14159*(radius*radius);
        this->volume=(4/3.0)*3.14159*(radius*radius*radius);
    }
    
};

int main(){

    Cube cube(10);
    Sphere sphere(5);
    std::cout<<"Area: "<<cube.area<<"cm\n";
    std::cout<<"Volume: "<<cube.volume<<"cm³\n";
    std::cout<<"Area: "<<sphere.area<<"cm\n";
    std::cout<<"Volume: "<<sphere.volume<<"cm³\n";
    return 0;
}