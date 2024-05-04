// rule of three for constructor
// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three#:~:text=The%20Rule%20of%20Three%20states,destructor


// Constructor
// constructors are special functions that initialize new objects of a class. 
// They play a crucial role in setting up the initial state of an object and 
// can be used to perform other initialization tasks, such as allocating resources
// or setting default values.

#include <iostream>
using namespace std;

class Phone {
    string name = "";
    string os = "";
    int price = 0;

public :

    // Default constructor
    Phone(); 
    // Parameterised Constructor
    Phone(const string & name, const string & os, const int price);
    // Copy Costructor
    Phone(const Phone &);
    // Destructor (~ is called Tilde sign)
    ~Phone();
    string getName() {return name;}
};

// Default Constructor
// default constructor is called when an object is created without any arguments. 
// It initializes the object with default values, setting a baseline state for the object.
    // In this code snippet, the default constructor for the Phone class 
    // initializes the name, os, and price to their default values. The 
    // empty initialization list means the compiler initializes them to 
    // default values based on their types (empty string for name and os, zero for price).
Phone :: Phone() : name(),os (),price(){
    cout << "Default Constructor" << endl;
};

// Parameterized Constructor
// parameterized constructor allows you to initialize an object with specific 
// values when it's created. It typically takes arguments that define initial
// state of the object.
Phone :: Phone(const string & _name, const string & _os, const int _price) 
            : name(_name), os (_os), price(_price) {
    cout << "Parameterised Constructor" << endl;
}

// Copy Constructor
// Copy constructor is used to create a new object as a copy of an existing 
// object. It is called when you pass an object by value, return an object 
// by value, or explicitly create a new object from an existing one.
Phone :: Phone(const Phone & values) {
    cout << "Copy Constructor " << endl;
    name = "copied " + values.name;
    os= "copied " +values.os;
    price = values.price;
}

// Destructor
// It can be used to release resources or perform cleanup tasks.
// destructor is called when an object is destroyed, either because it goes
// out of scope, is explicitly deleted, or the program ends. It is used to 
// clean up resources, close files, or perform other cleanup tasks.
Phone:: ~Phone(){
    cout << "Destructor called " << getName() << endl;
}

int main() {

    Phone samsung;
    cout << "samsung.getName() : "<< samsung.getName() << endl;

    Phone OnePlus ("1+", "android 13", 1000);
    cout << "OnePlus.getName() : "<< OnePlus.getName() << endl;

    Phone Oppo(OnePlus);
    cout << "Oppo.getName() : "<< Oppo.getName() << endl;

    return 0;
}
