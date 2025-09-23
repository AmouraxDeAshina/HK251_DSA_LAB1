#pragma once
#include <iostream>
#include <vector>
using namespace std;
vector<int> updateArrayPerRange(vector<int>& nums, vector<vector<int>>& operations);
template <class T>
class ArrayList {
protected:
    T* data;        // dynamic array to store the list's items
    int capacity;   // size of the dynamic array
    int count;      // number of items stored in the array

public:
    ArrayList() { capacity = 5; count = 0; data = new T[5]; }
    ~ArrayList() { delete[] data; }
    void    add(T e);//
    void    add(int index, T e);//
    int     size();//
    bool    empty() {
        if (this->data) delete[] data;
        this->data = nullptr;
        this->count = 0;
        this->capacity = 5;
    }
    void    clear();//
    T       get(int index) {
        if (index < 0 || index >= this->count)
            throw out_of_range("index is invalid!");

        return this->data[index];
    }
    void    set(int index, T e) {
        this->data[index] = e;
    }
    int     indexOf(T item) {
        for (int i = 0; i < this->count; i++) {
            if (this->data[i] == item) return i;
        }
        return -1;
    }
    bool    contains(T item) {
        for (int i = 0; i < this->count; i++) {
            if (this->data[i] == item) return true;
        }
        return false;
    }
    T       removeAt(int index);//
    bool    removeItem(T item);//
    void    ensureCapacity(int index);//
};

int equalSumIndex(vector<int>& nums);