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
    void    add(T e);
    void    add(int index, T e);
    int     size();
    bool    empty();
    void    clear();
    T       get(int index);
    void    set(int index, T e);
    int     indexOf(T item);
    bool    contains(T item);
    T       removeAt(int index);
    bool    removeItem(T item);
    void    ensureCapacity(int index);
};

int equalSumIndex(vector<int>& nums);