// Inheritance
// - reuse existing code

// Parent class / Base class / Alpha class 
// Child class / Derived class/ Beta class / Inherited class

// when you inherit parent class in child class you can use eveyrt method 
// defined in parent class and modify them too

// From which access modifier child class can inherit everything?
//              Parent class  | Child Class | Others
// ---------------------------|-------------|------------
// Public       Yes           | Yes         | Yes
// Protected    Yes           | Yes         | 
// Private      Yes           |             |                   


// What Is Inheritance in C++?
    // Inheritance in C++ allows a class to derive properties and behavior 
    // from another class. It establishes a relationship where a derived class 
    // inherits data members and member functions from a base class. The derived
    // class can then add new members, override existing behavior, or use inherited
    // functionality as is.


// Types of Inheritance
    // C++ supports various types of inheritance, depending on the level of access
    // the derived class has to the base class's members:

// Public Inheritance: 
    // The derived class inherits public members as public, and protected members 
    // as protected. This is the most common form of inheritance.
// Protected Inheritance: 
    // Public and protected members of the base class become protected in the 
    // derived class. Private members remain inaccessible.
// Private Inheritance: 
    // All inherited members become private in the derived class. This limits
    // the scope of inheritance, preventing further inheritance from this derived class.


// Syntax for Inheritance
// The syntax for inheritance in C++ involves the use of a colon (:) followed by an access specifier and the base class name:

// Multiple inheritance is allowed in C++

#include <iostream>
using namespace std;

class Man{

    string name;
    int age;
    // keep it in private because when we use it in code, we are not able to 
    // access private data members and so we are not able to modify those data members too 
    // so memory is getting allocated and getting wasted there
    Man(); 
protected:
    Man(const string & name, const int & age) : name(name), age(age){};
    void run (){cout << "running at default speed" << endl; }

public:
    void getName(); 
};

void Man::getName(){
    cout << "Name is : " << name << endl;
}

class SpiderMan : public Man{

public:
    SpiderMan(const string & name) : Man(name, 26){};

    void run(){
        cout << "Spiderman is running " << endl;
    }

};

int main() {

    SpiderMan peter("peter");
    peter.getName();
    peter.run();

    return 0;
}

// Name is : peter
// Spiderman is running 