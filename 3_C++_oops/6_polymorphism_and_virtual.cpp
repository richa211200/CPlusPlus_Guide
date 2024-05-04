// Polymorphism
// when you modify method in child class, so when single 
// method takes multiple forms that's polymorphism

#include <iostream>
using namespace std;

class One{

public:
    virtual void intro() {cout << "I'm One " << endl;};
};

class Two : public One {
    public:
    void intro() {cout << "I'm Two " << endl;}
};

class Three : public One {
    public:
    void intro() {cout << "I'm Three " << endl;}
};

int main() {

    One *a;
    Two b;
    Three c;

    // a.intro(); // I'm One
    // b.intro(); // I'm Two
    // c.intro(); // I'm Three

    a = &b;
    a->intro();

    a = &c;
    a->intro();

    return 0;
}

// Output: If we don't make function virtual
// I'm One 
// I'm One

// Output: If we make function virtual
// I'm Two 
// I'm Three 


// Concept: Virtual 
// The keyword virtual in C++ enables polymorphism, allowing a derived class 
// to override a method from its base class. When you call a virtual function 
// on a base class pointer or reference that points to a derived class object,
// the derived class's overridden method is executed. 
// This is known as dynamic dispatch or late binding.

// What Happens Without virtual
// When you call a method on a base class pointer that points to a derived class 
// object, the method from the base class is called if the method isn't declared 
// virtual. This behavior is due to early binding, where the compiler resolves the
// method call at compile time based on the pointer's declared type, not the actual
// object it points to.

// What Happens With virtual
// If you declare a method as virtual, the method call is resolved at runtime based
// on the actual object that the pointer or reference points to, allowing derived 
// classes to override base class methods. This is dynamic dispatch or late binding.