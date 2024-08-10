// Pass by pointer

#include <iostream>
using namespace std;

void life(int *age) {
    cout << "life - age: " << *age << endl;
    cout << "life - age value: " << *age << endl;

    ++age; // Increment the pointer to point to the next memory location
    cout << "life - after ++age: " << *age << endl;
    cout << "life - after ++age value: " << *age << endl;
}

int main() {
    int ageV = 30; // Initialize the variable
    cout << "ageV before life(): " << ageV << endl;
    cout << "ageV address before life(): " << &ageV << endl;

    life(&ageV);

    cout << endl;
    cout << "ageV address after running life(): " << &ageV << endl;
    cout << "ageV value after running life(): " << ageV << endl;
}

// main difference between pass by reference and pass by pointer methods
// - in pass by reference compulsary we have to intialise
// - in pass by pointer we can pass without initialising but its not advisible as it can lead to undefind behavior while dereferecing

//  you can technically pass a pointer to a function even if the pointer itself is not initialized, but doing so is highly discouraged due to the potential for undefined behavior.

// Key Points
// Uninitialized Pointer: If you pass an uninitialized pointer to a function, the pointer might point to an arbitrary memory location. Dereferencing this pointer can lead to unpredictable results, including program crashes or corruption of memory.

// Undefined Behavior: Using uninitialized pointers often results in undefined behavior. This means the program might behave erratically, crash, or produce unpredictable output.

// Best Practices: Always ensure that pointers are initialized before use. This ensures that you are working with valid memory addresses and helps prevent crashes and other issues.

