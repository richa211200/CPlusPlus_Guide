// ***Constant*** - read only variables, immutable variable

// immutability - constant variables are immutable because they can be 
// initialised only once in whole program

// When you declare constant variable initialise it with value otherwise
// it will take garbage value and you won't be able to change it

// const int num = 10;
// const char name = 'A';
// const float val = 11.3;


// Q6. Is there any way to change the value of a constant variable in C?
// https://www.geeksforgeeks.org/constants-in-c/?ref=lbp
// Yes, we can take advantage of the loophole created by pointers to change
// value of a variable declared as a constant in C.


// C Program to change the value of a constant variable
#include <stdio.h>

int main()
{
    // defining an integer constant
    const int var = 10;

    printf("Initial Value of Constant: %d\n", var);

    // defining a pointer to that const variable
    int* ptr
        = (int*)&var; // explicit cast to remove constness
    // changing value
    *ptr = 500;

    printf("Final Value of Constant: %d\n", var);
    printf("Accessing through pointer: %d\n", *ptr);
    return 0;
}
