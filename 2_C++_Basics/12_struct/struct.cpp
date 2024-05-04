// Structure allows you to group different types of data under single name.

// struct is way to define composite data type that groups multiple variables (members) together.
// A struct in C++ can have member functions, constructors, destructors, access modifiers (like public,
// private, protected) and even inheritance, similar to classes, but with a key difference: by default, 
// all members in struct are public.



#include <iostream>
using namespace std;

struct User {

    const int uId = 0;
    const char *name;
    int courseCount;

    void display() {
        cout << "id: "<<uId << " name: "<< name << " coursecount: "<<courseCount <<endl; 
    }
};

int main() {

    User richa = {001, "Richa", 3};

    richa.display();

    // richa.uId = 21; // this is not allowed because it's const variable

    richa.name = "RICHA"; // this is allowed because const is only applicable to pointer pointing to that address, 
    // not the value, so value can be modified

    richa.display();

    return 0;
}

// output 

// id: 1 name: Richa coursecount: 3
// id: 1 name: RICHA coursecount: 3

//------------------------------------------------------------------------------------------------------------------
// Why in output from name pointer it prints stirng value and not the address of pointer?
//------------------------------------------------------------------------------------------------------------------

// In C++, string literals like "Richa" are stored in a particular location in memory, and when you assign 
// them to a const char*, you are assigning the pointer to point to the address of that string in memory. 
// Even though name is a pointer, when you use it in output contexts like std::cout, it typically prints the
//  string it points to rather than the memory address itself.

// The reason std::cout prints the content of a C-style string (a const char* pointing to a null-terminated string)
//  instead of its address is that it has been designed to handle these string pointers differently than other 
//  pointers. Specifically, std::cout interprets a const char* as a C-style string and prints the characters 
//  from that address until it encounters a null terminator (\0). This behavior is essential for handling C-style 
//  strings in a human-readable manner.

