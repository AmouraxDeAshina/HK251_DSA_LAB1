#include <iostream>
#include "recursion.h"
using namespace std;
int main() {
	printArray(5);
	cout << "|\n";
	printPattern(14);
	cout << "|\n";
	int arr[] = { 10, 5, 7, 9, 15, 6, 11, 8, 12, 2 };
	cout << findMax(arr, 10);
	cout << "|\n";
	cout << isPalindrome("mom") << endl;
	cout << isPalindrome("abba") << endl;
	cout << findGCD(6, 4) << endl;

}