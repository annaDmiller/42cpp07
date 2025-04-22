#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <limits>
#include <functional>
#include <time.h>
#include <bits/stdc++.h>

template <typename T> class Array
{
    private:
        T* _arr;
        unsigned int _size;

    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);
        ~Array(void);

        unsigned int size(void) const;

        T& operator[](unsigned int index) const;

        class IndexOutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Index is out of bounds");
                }
        };
};

#include "Array.tpp"

#endif