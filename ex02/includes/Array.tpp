template <typename T>
Array<T>::Array(void) : _arr(NULL), _size(0)
{
    return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(NULL), _size(n)
{
    _arr = new T[_size];
    return ;
}

template <typename T>
Array<T>::Array(const Array& other) : _arr(NULL), _size(other._size)
{
    _arr = new T[_size];
    for (unsigned int ind = 0; ind < _size; ind++)
        _arr[ind] = other._arr[ind];
    return ;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return (*this);
    if (this->_arr != NULL)
        delete[] this->_arr;
    this->_size = other._size;
    this->_arr = new T[this->_size];
    for (unsigned int ind = 0; ind < this->_size; ind++)
        this->_arr[ind] = other._arr[ind];
    return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
    if (_arr != NULL)
        delete[] _arr;
    return ;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw IndexOutOfBoundsException();
    return (this->_arr[index]);
}
