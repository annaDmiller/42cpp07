#include "iter.hpp"


void print_arr(int *arr, size_t size)
{
    for (size_t ind = 0; ind < size; ind++)
        std::cout << arr[ind] << " ";
    std::cout << std::endl;
    return ;
}

void increase_int(int& num)
{
    num++;
    return ;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    print_arr(&(arr[0]), sizeof(arr) / sizeof(int));

    iter(&(arr[0]), sizeof(arr) / sizeof(int), &increase_int);

    print_arr(&(arr[0]), sizeof(arr) / sizeof(int));
    return (0);
}

