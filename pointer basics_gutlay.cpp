#include <iostream>
using namespace std;

int main() {
    // A. Declare pointers
    double *d_var;
    double *d_array;

    // B. Dynamic allocation
    d_var = new double;
    d_array = new double[10];

    // C. Input value
    cout << "Enter a value: ";
    cin >> *d_var;
    cout << "Value entered: " << *d_var << endl;

    // D. Initialize array to 1.0
    for(int i = 0; i < 10; i++) {
        d_array[i] = 1.0;
    }

    cout << "Array values:\n";
    for(int i = 0; i < 10; i++) {
        cout << d_array[i] << endl;
    }

    // E. Deallocate memory
    delete d_var;
    delete[] d_array;

    return 0;
}