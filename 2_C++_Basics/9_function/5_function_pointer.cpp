// functional pointer
// Function pointers in C/C++ are a mechanism that allows you to
// store the address of a function in a variable, then use that 
// variable to call the function. This concept can be powerful and
// flexible, offering a way to create dynamic and extensible programs.

// What Is a Function Pointer?
// A function pointer is a variable that holds the memory address of a function.
// Just like other pointers that store addresses of variables or objects, 
// a function pointer can be used to "point" to a specific function, 
// allowing you to call that function through the pointer.

// function pointer should have same data type and same definition as func

#include <iostream>
using namespace std;

int getTwo() {
    return 2;
}

int addme(int a, int b){
    return a + b;
}

void youCanDoIt(){
    cout << "you can do it " << endl;
}

int main(){

    int (*num)() = getTwo; 
    cout << "num" << num << endl;

    // Declare a function pointer, Assign the 'addme' function to the pointer
    int (*pointsToAddme)(int, int) = addme; 

    // Call the function through the pointer
    int result = pointsToAddme(2, 3);  
    std::cout << "Result: " << result << std::endl;

    void (*pointsToYouCanDoIt)() = youCanDoIt;
    pointsToYouCanDoIt(); // or use syntax (*pointsToYouCanDoIt)(); both will dereference pointer

    return 0;
}



// When to Use Function Pointers
// Function pointers are useful in several scenarios:

// Callbacks: In situations where you need to pass a function as an argument to another function (a callback), function pointers are invaluable. This is common in event-driven programming, GUI frameworks, and asynchronous processing.
// Dynamic Behavior: Function pointers allow you to create more dynamic behavior by selecting which function to call at runtime based on conditions or configurations. This is useful in implementing strategies, state machines, or plugins.
// Higher-Order Functions: In algorithms that take another function as a parameter, function pointers can be used to define custom behavior. For example, sorting functions might take a comparison function as an argument.
// Function Tables: Function pointers are useful for creating tables or arrays of functions, enabling dispatching or jumping to specific functions based on index or key. This is commonly used in virtual function tables in object-oriented programming.



// Examples of Function Pointer Usage
// Event Handling: Function pointers can be used in GUI applications to handle different events by assigning the appropriate callback function.
// Strategy Pattern: In design patterns, function pointers allow you to switch strategies dynamically, choosing which function to execute based on context.
// Plugins and Extensibility: Function pointers can be used to create extensible systems where different modules or plugins can register their functions for dynamic execution.






