// Class
// class is a fundamental building block of object-oriented programming, 
// providing a way to encapsulate data and behavior into a single construct. 

// A class definition defines the structure of the class, including its
// 1)  data members (also known as properties or attributes)
// 2)  member functions (also known as methods)
// 3)  access controls to manage who can use or modify them

// Object
// "object" refers to an instance of a class
// containing data and methods (behavior) that operate on that data. 
// Objects in C++ are central to the object-oriented programming paradigm,
// encapsulating state and behavior into a single entity.

#include <iostream>
using namespace std;

class User {

    int authId = 21; // if we don't define access modifier it's private by default
public: 
    string name = "default";
    void getClassMsg(){cout << "you're doing great "<< name << endl;}    

    // for that object, refVariable will have myAuth value, so const is needed
    void setAuthId(const int &myAuth){authId = myAuth;} 
    int getAuthId(){return authId;}

    User(){
        cout << "authId in private: "<< authId << endl;
    }
};

int main () {

    User student;
    student.getClassMsg();
    student.name = "richa";
    student.getClassMsg();
    student.setAuthId(200);
    cout<< "student : authId: " << student.getAuthId() << endl;
    student.setAuthId(300);
    cout<< "student : authId: " << student.getAuthId() << endl;


    User student2;
    student2.getClassMsg();
    student2.name = "richa2";
    student2.getClassMsg();
    student2.setAuthId(201);
    cout<< "student2 : authId: " << student2.getAuthId() << endl;

    return 0;
}

// Components of a Class Definition
// A class definition typically consists of the following components:

// Class Declaration:
    // Defines the name of the class.
    // Specifies public, private, or protected access levels for members.
    // May include constructors, destructors, and member functions.
// Access Specifiers:
    // Public: Members that are publicly accessible from outside the class.
    // Private: Members that are accessible only within the class itself.
    // Protected: Members accessible within the class and derived classes (used in inheritance).
// Data Members:
    // Variables that store the state or data of the class.
// Member Functions:
    // Functions that define the behavior or operations that can be performed on the class.
// Constructors and Destructors:
    // Constructor: A special function called when an object is created.
    // Destructor: A special function called when an object is destroyed or goes out of scope.




// Definition of Object in C++
// object in C++ has several key characteristics:

// Instance of a Class: 
    // object is created from a class definition. 
    // The class defines the blueprint, specifying the properties (data members) 
    // and behaviors (member functions) that object will have

// Encapsulation: 
    // Objects encapsulate data and operations. 
    // They expose a public interface for interacting with the object while keeping
    // certain data and methods private, ensuring internal details are hidden from the outside

// State and Behavior: 
    // Objects have state (stored in data members) and behavior (defined by member functions) 
    // The state can change over time, and the behavior dictates how object 
    // interacts with other objects or carries out operations

// Lifetime: 
    // object's lifetime is the period during which it exists in memory 
    // Objects can be created on the stack (with automatic storage duration) 
    // or the heap (with dynamic storage duration). The lifetime determines when
    // the object is created and when it's destroyed

// How Objects Are Created
// Objects are created (instantiated) from a class definition. This can happen in various ways:

// Automatic Storage Duration: 
    // Objects created on the stack, which are automatically destroyed when they go out of scope.
// Dynamic Storage Duration: 
    // Objects created on the heap, which require explicit deallocation to avoid memory leaks.
// Static Storage Duration: 
    // Objects that exist for the entire lifetime of the program, like global objects or 
    // static variables in functions or classes.
