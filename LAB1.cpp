#include <iostream>
#include "recursion.h"
#include "OOP.h"
#include "arrayList.h"
using namespace std;
int main() {
	/*printArray(5);
	cout << "|\n";
	printPattern(14);
	cout << "|\n";
	int arr[] = { 10, 5, 7, 9, 15, 6, 11, 8, 12, 2 };
	cout << findMax(arr, 10);
	cout << "|\n";
	cout << isPalindrome("mom") << endl;
	cout << isPalindrome("abba") << endl;
	cout << findGCD(6, 4) << endl;*/
	/*Book book1("Giai tich 1", "Nguyen Dinh Huy", 2000);
	book1.printBook();*/
	vector<int> nums{ 13, 0, 6, 9, 14, 16 };
	vector<vector<int>> operations{ {5, 5, 16}, {3, 4, 0}, {0, 2, 8} };
	nums = updateArrayPerRange(nums, operations);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
}