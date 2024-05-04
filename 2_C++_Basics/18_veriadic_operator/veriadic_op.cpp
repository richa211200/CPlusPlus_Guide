// Variadic Templates
// Variadic templates were introduced in C++11, allowing you to create
// templates that can take a variable (or indefinite) number of template 
// arguments. This feature is useful for creating functions or classes that
// can operate with an unknown number of arguments or types.



#include <iostream>
using namespace std;

void getValues() {
    // No operation
    cout << "base case " << endl;
}


template <typename T, typename... Args>
void getValues(T t, Args... args){
    cout << "t: " << t << endl;
    getValues(args...);
}

int main(){

    getValues(2, 3, 4.5, 6.0008, 1, 7, 4, 11, 21, 25, "Richa", 22);

}

// A base case getValues() with no parameters is defined, which serves as the endpoint for the recursion.
// The recursive getValues template function prints the first argument and then recursively calls itself with the rest of the arguments.
// The recursion terminates gracefully when it reaches the base case with zero arguments, avoiding the compilation error.


// output

// t
// t: 2
// t: 3
// t: 4.5
// t: 6.0008
// t: 1
// t: 7
// t: 4
// t: 11
// t: 21
// t: 25
// t: Richa
// t: 22
// base case 