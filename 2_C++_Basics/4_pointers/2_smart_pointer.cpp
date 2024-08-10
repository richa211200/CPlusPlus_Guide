// we know keywords new and delete
// New - allocates memory
// Delete - deallocates memory

// if we use new keyword we have to use delete along with it

// smart pointer solves issue of forgetting to use delete

// Good documentation:
// https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170


// Smart pointers in C++ are specialized pointer objects that automatically manage memory,
// reducing the risk of memory leaks and dangling pointers. They are designed to provide
// the benefits of automatic garbage collection while retaining the flexibility and
// performance advantages of manual memory management. The C++ Standard Library 
// provides several types of smart pointers in the <memory> header, each serving
// a specific purpose. Let's explore the different types of smart pointers and 
// their use cases with examples.

// Why Smart Pointers?
    // Traditional raw pointers in C++ require explicit management with new and delete. 
    // This manual memory management can lead to common issues like:

    // Memory Leaks: Forgetting to call delete after new.
    // Dangling Pointers: Accessing a pointer after associated object has been deleted.
    // Double Deletion: Calling delete on the same pointer twice, leading to undefined behavior.
// Smart pointers automate memory management, helping avoid these issues by
// ensuring proper resource handling.

// Types of smart pointers
// Unique pointer : frees up memory as soon as scope ends
//                  you cannot copy unique pointers
// shared pointer
// weak pointer

// Types of Smart Pointers
    // std::unique_ptr: frees up memory as soon as scope ends
//                  you cannot copy unique pointers
    // Represents sole ownership of a resource. The resource is
    // automatically released when the unique pointer goes out of scope. 
    // This type of pointer cannot be copied, ensuring unique ownership.

    // std::shared_ptr: Allows multiple pointers to share ownership of a resource.
    // The resource is released when all shared pointers are destroyed or reset. 
    // It uses reference counting to keep track of the number of owners.

    // std::weak_ptr: Represents a weak reference to a resource owned by a 
    // std::shared_ptr. It doesn't increase the reference count, allowing it to
    // avoid cyclic references, but can be used to check if a resource is still valid.



#include <iostream>
#include <memory>
using namespace std;

class User{

public:
    User(){
        cout << "created user" <<endl;
    }

    ~User(){
        cout << "destroyed user" <<endl;
    }

    void testFunc(){
        cout << "inside test function " <<endl;
    }
};

int main() {

    {
        unique_ptr<User> user = make_unique<User>();
        user->testFunc();

        // unique_ptr<User> user2 = user; // not allowed
        // because if two pointers are poiting to same address then it 
        // creates unsafe memory management

        // move semantics
        std::unique_ptr<User> user2 = std::move(user);  // Transfers ownership to user2
        user2->testFunc();
    }  

    {
        // shared pointer
        // std::shared_ptr in C++ is a type of smart pointer that allows multiple
        // pointers to share ownership of a single resource. This shared ownership
        // is managed through a reference count, which keeps track of how many shared
        // pointers refer to the same resource. When the last std::shared_ptr referring
        // to the resource is destroyed or reset, the resource is automatically deleted.
        // This prevents memory leaks and dangling pointers, providing a safer way to 
        // manage dynamic memory.
        cout << "shared pointer" << endl;
        shared_ptr<User> userSh = make_shared<User>();
        shared_ptr<User> userSh2 = userSh;
        weak_ptr<User> wUser = userSh;
        cout << "userSh: shared pointer" << endl;
        userSh->testFunc();
        cout << "userSh2: shared pointer" << endl;
        userSh2->testFunc();
    } 

    cout << "outside func " << endl;
    return 0;
}

// output 
// created user
// inside test function 
// destroyed user
// outside func 