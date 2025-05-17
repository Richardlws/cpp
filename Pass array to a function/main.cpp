#include <iostream>
double getTotal(double prices[], int size);
int main()
{

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total;
    return 0;
}
double getTotal(double prices[], int size)
{
    double price;
    for (int i = 0; i < size; i++)
    {
        price += prices[i];
    }
    return price;
}