#include "Array.hpp"


template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return "Index out of bounds";
}