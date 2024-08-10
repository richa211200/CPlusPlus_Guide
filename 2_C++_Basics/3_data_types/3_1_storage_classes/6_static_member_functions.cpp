// Static Member Functions

// Belong to the Class: 
//      Static member functions are associated with class, 
//      not with any particular instance of class. They can 
//      be called using class name and do not require an object
//      of class to be created

// No this Pointer: 
//      Static member functions do not have a this pointer. 
//      The this pointer is used to refer to the instance of class 
//      that the non-static member function is called on. Since 
//      static member functions do not operate on a specific instance,
//      they do not have access to the this pointer

// Access to Static Members Only: 
//      Static member functions can only access other static members
//      (both data members and functions) of class. This is because 
//      static members are shared across all instances of class and 
//      belong to class itself, whereas non-static members are unique 
//      to each instance

#include<bits/stdc++.h>
using namespace std;

class Car {

    public:
    
    static int noOfCars;
    static string owner;
    static string carModel;

    static void getPurchaseDetails(){
        cout << "noOfCars: " << noOfCars << endl;
        cout << "owner: " << owner << endl;
        cout << "carModel: " << carModel << endl;
    }
};

int Car::noOfCars = 0;
string Car::owner = "indian citizen";
string Car::carModel = "Benz car";

int main() {

    Car::noOfCars = 1;
    Car::carModel = "Benzzzz";
    Car::owner = "Richa";    
    Car::getPurchaseDetails();

    return 0;
}

// Output

// noOfCars: 1
// owner: Richa
// carModel: Benzzzz