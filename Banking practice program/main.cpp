#include <iostream>

void showBanlance(double balance);
double deposit();
double withdrea(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        std::cout << "***********************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "***********************\n";
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit Money\n";
        std::cout << "3.Withdraw Money\n";
        std::cout << "4.Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBanlance(balance);
            break;
        case 2:
            balance += balance;
            break;
        case 3:
            balance -= balance;
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
void showBanlance(double balance){
    std::cout<<"Your balance is: "<<balance<<"\n";
}
double deposit(){
    double 
    std::cout<<"Enter your deposit: "
    std::cin>>deposit;


    std::cout<<"Your balance is: "<<balance<<"\n";
}
double withdrea(double balance){
    return 0;
}
