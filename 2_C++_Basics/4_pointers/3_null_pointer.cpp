// What Is nullptr?
// nullptr is a constant that represents a null pointer, and it has
// a distinct type std::nullptr_t. Unlike 0 or NULL, nullptr is
//  explicitly designed to be used with pointers, ensuring type safety
//   and avoiding confusion with integer values.

// nullptr is a special keyword in C++ used to represent a null pointer,
// providing a type-safe and explicit way to indicate that a pointer does
//  not point to any valid memory location or object. It was introduced in 
//  C++11 to address the ambiguity of using 0 or NULL to represent a null 
//  pointer, which could lead to type-related issues. Let's explore what 
//  nullptr is, when and why to use it, and provide examples of its use.

// example of ambiguity code
        // #include <iostream>
        // #define NULL 0
        // using namespace std;

        // void printVal (int a){
        //     cout << "int value is : " << a <<endl;
        // }

        // void printVal (double a){
        //     cout << "float value is : " << a <<endl;
        // }

        // void printVal (int *a){
        //     cout << "Pointer int value is : " << a <<endl;
        // }

        // int main() {

        //     printVal(3);
        //     printVal(3.4);
        //     printVal(NULL);
        // }

//correct way to introduce null pointer
#include <iostream>
using namespace std;

void printVal (int a){
    cout << "int value is : " << a <<endl;
}

void printVal (double a){
    cout << "float value is : " << a <<endl;
}

void printVal (int *a){
    cout << "Pointer int value is : " << a <<endl;
}

int main() {

    printVal(3);
    printVal(3.4);
    printVal(nullptr);
}


// int value is : 3
// float value is : 3.4
// Pointer int value is : 0
// ----------------------------------------------------------------------------


// Benefits of Using nullptr
// Type Safety: nullptr has a specific type designed for pointers, 
// reducing the risk of type-related errors or accidental type conversions.
// Code Readability: Using nullptr is more expressive and clearly indicates
// that a pointer is intended to be null, improving code readability and maintainability.
// Avoids Ambiguity: Using nullptr removes the ambiguity that can arise when
// using 0 or NULL, which might be interpreted as integers in certain contexts.


// When to Use nullptr
// Initializing Pointers: When creating a pointer that doesn't yet point 
// to a valid object, initialize it with nullptr.
// Checking for Null: When checking if a pointer is null, use nullptr for comparison.
// Assigning Null to Pointers: If you need to reset a pointer to indicate 
// it no longer points to a valid object, use nullptr.
// Function Overloading: When overloading functions with different pointer
// and integer types, using nullptr avoids ambiguity caused by 0.

