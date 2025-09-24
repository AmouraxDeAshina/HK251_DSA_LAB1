#include "arrayList.h"

vector<int> updateArrayPerRange(vector<int>& nums, vector<vector<int>>& operations) {
    vector<int> num = nums;
    for (size_t i = 0; i < operations.size(); i++) {
        for (int j = operations[i][0]; j <= operations[i][1]; j++) {
            num[j] = num[j] + operations[i][2];
        }
    }
    return num;
}

template<class T>
T ArrayList<T>::removeAt(int index) {
    /*
    Remove element at index and return removed value
    if index is invalid:
        throw std::out_of_range("index is out of range");
    */
    if (index < 0 || index >= this->count)
        throw std::out_of_range("index is out of range");
    
    T temp = this->data[index];
    for (int i = index; i < this->count-1; i++) {
        this->data[i] = this->data[i + 1];
    }
    this->count--;
    return temp;
}

template<class T>
bool ArrayList<T>::removeItem(T item) {
    /* Remove the first apperance of item in array and return true, otherwise return false */
    for (int i = 0; i < this->count; i++) {
        if (this->data[i] == item) {
            this->removeAt(i);
            return true;
        }
    }
    return false;
}

template<class T>
void ArrayList<T>::clear() {
    /*
        Delete array if array is not NULL
        Create new array with: size = 0, capacity = 5
    */
    if (this->data != nullptr)
        delete[] this->data;
    this->data = nullptr;
    this->size = 0;
    this->capacity = 5;
}

template<class T>
void ArrayList<T>::ensureCapacity(int cap) {
    /*
        if cap == capacity:
            new_capacity = capacity * 1.5;
            create new array with new_capacity
        else: do nothing
    */
    if (cap >= this->capacity) {
        this->capacity *= 1.5;
        T* temp = data;
        this->data = new T[this->capacity];
        for (int i = 0; i < this->count; i++) {
            this->data[i] = temp[i];
        }
    }
}

template <class T>
void ArrayList<T>::add(T e) {
    /* Insert an element into the end of the array. */
    ensureCapacity(this->count + 1);
    this->data[this->count++] = e;
}

template<class T>
void ArrayList<T>::add(int index, T e) {
    /*
        Insert an element into the array at given index.
        if index is invalid:
            throw std::out_of_range("the input index is out of range!");
    */
    ensureCapacity(this->count + 1);
    for (int i = this->count; i > index; i--) {
        this->data[i] = this->data[i - 1];
    }
    this->data[index] = e;
    this->count++;
}

template<class T>
int ArrayList<T>::size() {
    /* Return the length (size) of the array */
    return this->count;
}

int sum(vector<int> x, int L, int R) {
    int s = 0;
    for (int i = L; i <= R; i++) {
        s += x[i];
    }
    return s;
}
int equalSumIndex(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (sum(nums,0, i - 1) == sum(nums,i + 1, nums.size())) {
            return i;
        }
    }
}

