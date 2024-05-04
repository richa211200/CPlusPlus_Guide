// call by value and call by reference is two difference ways to pass arguments to functions

// What Is Call by Value?--------------------------------------------------------------
// In C++, "call by value" means that when you pass a variable to a function,
// the function gets a copy of the variable's value. This copy is separate from
// the original variable, meaning that any changes made to the copy within the 
// function don't affect the original variable outside of it.

// How It Works?----------------------------------------------------------------------- 
// 1) Copying: When you pass an argument to a function by value, C++ creates a
// new variable within the function and initializes it with the value of the argument.
// 2) Scope: This copy exists only within the function's scope. Once the function 
// finishes execution, the copy is destroyed, and any changes made to it are lost.
// 3) No Side Effects: Since the function works with a copy, the original variable 
// remains unchanged. This ensures that modifications inside the function don't 
// by mistakenly affect other parts of your code.

// When to Use Call by Value?----------------------------------------------------------
// 1) Data Safety: If you want to ensure that a function doesn't accidentally change
//  the original variable, call by value is the way to go. This makes your code more
//  robust and reduces unintended side effects.
// 2) Small Data Types: For basic data types like int, float, char, etc., copying is
//  generally inexpensive. It makes sense to use call by value for these types.
// 3) Immutable Data: If the function doesn't need to modify the input data, call by
// value is a good choice.

// ------------------------------------------------------------------------------------
// Example to understand call by value ------------------------------------------------
// ------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void life(int age) {
    ++age;
    cout << "life-age: "<< age <<endl;
}

int lifeIsFun(int age){
    ++age;
    cout << "lifeIsFun-age: "<< age <<endl;
    return age;
}

int main() {

    int lifeV = 11;
    int lifeIsFunV = 21;
    life(lifeV);
    lifeIsFun(lifeIsFunV);

    cout << "lifeV: "<< lifeV <<endl;
    cout << "lifeIsFunV: "<< lifeIsFunV <<endl;

    return 0;
}