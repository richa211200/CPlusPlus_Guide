// array - group multiple value of same data type into one data structure
// array pointer
// post increment and dereferencing

#include <iostream>
using namespace std;

int main(){

    int score[4] = {3, 7, 11, 21};
    cout<< "score[0] :" << score[0] << endl;//3

    int match[4];
    match[0] = 2;
    match[1] = 4;
    match[2] = 11;
    cout<< "match[0] :" << match[0] << endl;//2
    cout<< "match[1] :" << match[1] << endl;//4
    cout<< "match[2] :" << match[2] << endl;//11

    // ap = array pointer
    // int *ap = match; creates a pointer ap that points to the beginning of the match array. 
    // This is equivalent to pointing at the first element (match[0]).
    int *ap = match; 

// pointer & dereferencing
// Pointer Increment (*ap++)
//      The expression *ap++ has a unique behavior due to operator precedence.
//      The ++ operator here is a post-increment, which means it increments the pointer ap but returns-
//      the original pointer before it was incremented.
//      This operation moves the pointer ap from the first element (match[0]) to the second element (match[1]).
//      The * operator dereferences the pointer, so *ap refers to the value at the current position of ap
//      But due to post-increment, this dereferencing happens before the pointer is moved.       
// array pointers are smart enough to understand that ++ means next value in referenced array

    *ap++; //modifies value at match[1]
    // ap += 2; //modifies value at match[2] directly
    *ap = 21;

    cout<<"ap: " << ap <<endl;//address of ap
    cout<< "ap match[0] :" << match[0] << endl;//2
    cout<< "ap match[1] :" << match[1] << endl;//21
    cout<< "ap match[2] :" << match[2] << endl;//11
    cout<< "ap match[3] :" << match[3] << endl;//0
    cout<< endl;
    cout<< endl;
    cout<< endl;

    //example of post increment operator
    int x = 10;
    int y = x++; // Post-increment: y gets 10, then x is incremented to 11
    cout<< "y :" << y << endl;
    cout<< "x :" << x << endl;

    return 0; 

}


//output

// score[0] :3
// match[0] :2
// match[1] :4
// match[2] :11
// ap: 0x7ffe55e2e294
// ap match[0] :2
// ap match[1] :21
// ap match[2] :11
// ap match[3] :0



// y :10
// x :11