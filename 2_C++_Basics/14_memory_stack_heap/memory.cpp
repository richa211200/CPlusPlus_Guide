// two types of memory - stack, heap

// we have memory block in computer - RAM

// stack and heap memory are part of RAM
// both work fundamentally same, allocation of memory part is different
// starting initialisation of memory is different


// Stack  - LIFO - last in first out
// - Predefined size
// - fastest memory you get & default memory
// - stack is memory which works as when you define variable it's going
//   to allocate memory and everytime you define vew variable it keep
//   on adding it to stack

// Heap 
// - Predefined but it can grow


// how to differenciate which's heap and stack?

#include <iostream>
using namespace std;

struct  UserInfo
{
    int uId;
    string name;

    UserInfo() : uId(1), name("Richa") {}; //constrcutor
};


int main() {

    // stack

    int score = 10;
    UserInfo mike;

    // heap

    int* heap_score = new int;
    *heap_score = 21;
     // prev. - not initialised UserInfo through constrcutor and run code it throws segmentation fault
    // UserInfo* nike;

    //initialised with constructor
    UserInfo* nike = new UserInfo();


    // The segmentation fault you're encountering is because you're trying to access
    // a heap-allocated object (nike) that has not been properly initialized. 
    // In your code, you've defined a pointer to a UserInfo structure, but you haven't
    // allocated any memory for it using new. This leads to undefined behavior when you
    // try to access its members (nike->uId, nike->name).

// Here's why it causes a segmentation fault:

// When you create a pointer like UserInfo* nike;, it points to a random memory address
// (essentially junk memory). If you attempt to dereference it or access its members, 
// you're accessing memory that doesn't belong to your program, leading to a segmentation fault.

    cout << "score: " << score << endl;
    cout << "mike id: " << mike.uId << endl;
    cout << "mike name : " << mike.name << endl;

    cout << "heap_score: " << heap_score << endl;

    try {
    cout << "heap_score id: " << nike->uId << endl; // when you try access values of pointer 
    // variable it should be initialised, otherwise it will throw segmentation fault
    cout << "heap_score name: " << nike->name << endl;
    }catch(exception ecvt){
        ecvt.what();
    }
    return 0;

}
