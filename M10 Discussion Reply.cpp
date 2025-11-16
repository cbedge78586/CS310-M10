#include <iostream>
using namespace std;

int main() {
    // int* ptr;           // Declared pointer but not initialized -- commented out -be
    int value = 10;

    int* ptr = &value;       //  Error 1: Dereferencing an uninitialized pointer (undefined behavior)

    int* num = &value;
    cout << "Value: " << *num << endl;

    const char *text = "Hello";   //  Error 2: Assigning string literal to non-const char* (deprecated in modern C++)

    cout << "Text: " << text << endl;

    return 0;
}
