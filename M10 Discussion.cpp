// Charles Edge
// CS310-T301
// M10: Discussion

#include <iostream>
using namespace std;

int main() {

// Init as an integer variable
    int number = 10;

// Declare pointer as an integer
    int* ptr;

    *ptr = number;          

// Output to screen  
    cout << "The value is: " << *ptr << endl;
    double* dptr = &number;  

// End program
    return 0;
}
