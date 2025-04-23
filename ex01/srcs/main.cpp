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

    iter<int>(&(arr[0]), sizeof(arr) / sizeof(int), &increase_int);

    print_arr(&(arr[0]), sizeof(arr) / sizeof(int));
    return (0);
}

/*
class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}
*/