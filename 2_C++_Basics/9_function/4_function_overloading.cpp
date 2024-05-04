// function/method overloading
// - creating multiple methods with same name but with diff parameters

#include <iostream>
using namespace std;

int addme(int a, int b) {
    return a + b;
}

float addme(float a, float b) {
    return a + b ;
}

int main() {

    int num1 = 3;
    int num2 = 4;

    int num3 = 10.5;
    int num4 = 11.5;

    cout << addme(num1, num2) << endl;
    cout << addme(num3, num4) << endl;


}




// benefits :
// - The compiler determines which version of the function to call based
//   on the number and type of arguments passed to it. 
// - This feature enhances code readability and reusability by enabling
//   more intuitive function names that can represent a variety of operations or scenarios.



// Characteristics of Function Overloading
// 1) Same Function Name, Different Signatures: 
// Function overloading allows multiple functions to share the same name, provided
// their parameter lists differ in some way.

// 2) Parameter Differentiation: 
// Functions must differ by the number of parameters or their types. The parameter
// types include primitive data types (int, float, char, etc.), references, pointers,
// or user-defined types (like classes and structures).

// 3) Return Type Does Not Differentiate Overloads: 
// Overloading is not affected by return types. Having two functions with the same 
// name and parameter list but different return types is not allowed
// example: below is not alllwed
// error - cannot overload function distinguised by return type alone
    // int addme(int a, int b) {
    //     return a + b;
    // }

    // float addme(int a, int b) {
    //     return a + b;
    // }

// 4) Compile-Time Polymorphism: 
// Function overloading is a form of compile-time polymorphism. The correct 
// function is chosen by the compiler based on the arguments passed at compile time.



// What is Not Allowed in Function Overloading
// 1) Same Parameters, Different Return Type: 
//      Functions with the same parameter list but different return types are not allowed
// 2) Parameter Type Ambiguity: 
//      If overloading creates ambiguity (such as overloaded functions with parameters of
//      similar types), the compiler will throw an error
// 3) Functions Differing Only by Default Parameters: 
//      Overloading based solely on default parameters can lead to ambiguity
// example : Example of Ambiguity Caused by Default Parameters
        // #include <iostream>

        // void display(int x, int y = 10) {
        //     std::cout << "display(int, int): " << x << ", " << y << std::endl;
        // }

        // void display(int x) {
        //     std::cout << "display(int): " << x << std::endl;
        // }

        // int main() {
        //     display(5);  // Which function should this call?
        //     return 0;
        // }
// In this example, there are two overloaded display functions:

        // The first display function takes two parameters (int x, int y = 10), 
        // with a default value for the second parameter.
        // The second display function takes one parameter (int x).
        // However, when calling display(5), there's an ambiguity because it could refer to:

        // The display(int, int) function with a default parameter, using 10 for y.
        // The display(int) function, which only takes one parameter.
        // Since the compiler can't decide which function to call, this results in a 
        // compilation error due to ambiguity.

        // Solution to Avoid Ambiguity
        // To resolve such ambiguities, you should ensure that the overloaded functions
        // differ in some other way besides default parameters. Here are some possible solutions:

        // Remove the default parameter: This eliminates the ambiguity by requiring explicit 
        // parameter values.
        // Use distinctly different parameter lists: This can include varying the types or 
        // the number of parameters, or by using references or pointers to create distinguishable
        // overloads.






