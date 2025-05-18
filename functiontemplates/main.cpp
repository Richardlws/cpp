#include <iostream>
template <typename T>

T max(T x, T y)
{
    return (x > y) ? x : y;
}
/*double max(double x, double y)
{
    return (x > y) ? x : y;
}
char max(char x, char y)
{
    return (x > y) ? x : y;
}*/
int main()
{
    std::cout << max(1, 2) << '\n';
    return 0;
}