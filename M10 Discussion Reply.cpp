//  Ronald Woods
//  CS310 - T301
//  11/14/2025
// 
//  Week 10 - Discussion Board Program - Using Pointers, must contain two errors and not compile. 

#include <iostream>
using namespace std;

int main() {
	int value = 25;
	int* ptr = &value;

	cout << "Value: " << *ptr << endl;
// Line 16, updated prt to reflect ptr
	cout << "Value again: " << *ptr << endl;
// Line 18, removed * in front of value
	cout << "Another value: " << value << endl;

	return 0;
}