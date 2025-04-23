#pragma once

#include <iostream>
#include <string>
#include <functional>

template <typename T>
void iter(T* array, size_t len, void (*func)(T&))
{
    for (size_t ind = 0; ind < len; ind++)
        func(array[ind]);
    return ;
}

template <typename T>
void iter(T* array, size_t len, void (*func)(const T&))
{
    for (size_t ind = 0; ind < len; ind++)
        func(array[ind]);
    return ;
}