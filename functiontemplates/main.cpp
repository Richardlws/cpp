#include <iostream>
template <typename T,typename U>

auto max(T x, U y) -> decltype((x > y) ? x : y)
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
    std::cout << max(1, 2.1) << '\n';
    return 0;
}