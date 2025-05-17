#include <iostream>
void sort(int arrays[], int size);
int main()
{
    int arrays[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arrays) / sizeof(arrays[0]);
    sort(arrays, size);
    for (int element : arrays)
    {
        std::cout << element << " ";
    }
    return 0;
}
void sort(int arrays[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arrays[j] > arrays[j + 1])
            {
                temp = arrays[j + 1];
                arrays[j + 1] = arrays[j];
                arrays[j] = temp;
            }
        }
    }
}