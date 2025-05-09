
template <typename T>
Array<T>::Array(unsigned int n) : Myarray(new T[n]), Size(n) 
{
    return;
}

template <typename T>
Array<T>::Array(void) : Myarray(NULL), Size(0) 
{
    return;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : Myarray(NULL), Size(0) 
{
    *this = other;
}

template <typename T>
Array<T>::~Array() 
{
    delete[] Myarray;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) 
{
    if (this != &other) {
        delete[] Myarray;
        Size = other.Size;
         Myarray = new T[Size];
        for (unsigned int i = 0; i < Size; ++i) {
            Myarray[i] = other.Myarray[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) 
{
    if (index >= Size)
        throw OutOfBoundsException();
    return Myarray[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const 
{
    if (index >= Size)
        throw OutOfBoundsException();
    return Myarray[index];
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() 
{
    return "Index out of bounds";
}
template <typename T>
unsigned int Array<T>::size() const 
{
    return Size;
}
