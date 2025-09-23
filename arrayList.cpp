#include "arrayList.h"
template<class T>
T ArrayList<T>::removeAt(int index) {
    /*
    Remove element at index and return removed value
    if index is invalid:
        throw std::out_of_range("index is out of range");
    */

}

template<class T>
bool ArrayList<T>::removeItem(T item) {
    /* Remove the first apperance of item in array and return true, otherwise return false */
}

template<class T>
void ArrayList<T>::clear() {
    /*
        Delete array if array is not NULL
        Create new array with: size = 0, capacity = 5
    */
}

template<class T>
void ArrayList<T>::ensureCapacity(int cap) {
    /*
        if cap == capacity:
            new_capacity = capacity * 1.5;
            create new array with new_capacity
        else: do nothing
    */
}

template <class T>
void ArrayList<T>::add(T e) {
    /* Insert an element into the end of the array. */
}

template<class T>
void ArrayList<T>::add(int index, T e) {
    /*
        Insert an element into the array at given index.
        if index is invalid:
            throw std::out_of_range("the input index is out of range!");
    */
}

template<class T>
int ArrayList<T>::size() {
    /* Return the length (size) of the array */
    return 0;
}

