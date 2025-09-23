#include "recursion.h"
void HELPER(int i, int n) {
    cout << i;
    if (i < n) {
        cout << ", ";
        HELPER(i + 1, n);
    }
}
void printArray(int n) {
    if (n >= 0) HELPER(0, n);
}

void HELPER2(int k, bool flag, int n) {
    if (k > n) return;
    cout << k;
    if ((k == n && flag) || (k < n)) cout << " ";

    if (k < 0) flag = false;

    if (flag) k -= 5;
    else k += 5;
    HELPER2(k, flag, n);
}
void printPattern(int n) {
    if (n > 0) HELPER2(n,1, n);
}

int HELPER3(int* arr, int length, int currMAX, int i) {
    if (*(arr + i) > currMAX) currMAX = *(arr + (i++));
    else i++;
    if (i == length) return currMAX;
    else return HELPER3(arr, length, currMAX, i);
}
int findMax(int* arr, int length) {
    if (length > 0) return HELPER3(arr, length, *arr, 1);
}

bool isPalindrome(string str) {
    if (str.length() == 1 || str.length() == 0) return true;
    
    bool flag = (str[0] == str[str.length() - 1]);
    if (str.length() > 0) str.erase(0, 1);
    if (str.length() > 0) str.erase(str.length() - 1, 1);
    
    return flag * isPalindrome(str);
}

int findGCD(int a, int b) {
    if (a == b) return a;

    if (a < b) return findGCD(b - a, a);
    else return findGCD(a - b, b);
}