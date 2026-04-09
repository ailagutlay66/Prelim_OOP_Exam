#include <iostream>
using namespace std;

// Here is the function definition of this pointer

int* randArray(int n) {
    int* arr = new int[n];  // dynamically allocate array

    for(int i = 0; i < n; i++) {
        arr[i] = rand();    // generate pseudo-random integers
    }

    return arr; // return pointer to array
}

// Here is the main code of pointer

int main() {
    int size = 100;

   
    int* arr = randArray(size);

   
    cout << "Odd index elements:\n";
    for(int i = 1; i < size; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    cout << "\nIndexes multiple of 3 and 5:\n";
    for(int i = 0; i < size; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    
    cout << "\nAll values:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

   
    delete[] arr;

    return 0;
}