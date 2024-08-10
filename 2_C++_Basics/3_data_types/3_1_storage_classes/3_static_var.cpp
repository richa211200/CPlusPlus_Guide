// static
// static varibale has property of preserving value outside thier scope
// it preserves last value assigned to it
// static variables are initialised only once and they exist till termination of program

#include<bits/stdc++.h>
using namespace std;

class Car {
    
    private:
    int noOfCars;
    // private static members can only modified  using member function or friends
    // but not directly from outside class
    // you cannot initialize static members directly within a constructor in C++.
    // Static members of a class are shared across all instances of the class, 
    // and they are initialized separately from instance-specific data.
    static string owner;
    public:
    
    static string model;
    
    void print() const {
        cout << "model: " << model<<endl;
        cout << "noOfCars " << noOfCars << endl;
        cout << "owner " << owner << endl;
    }
    
    void setModel(const string& model_) {
        this->model = model_;
    }
    
    void setOwner(const string& owner_) {
        this-> owner = owner_;
    }
    
};

string Car::model = "default";
string Car::owner = "richa";

int main(){
    
    Car miniCooper;
    Car::model = "mini2";
    miniCooper.setOwner(" patel");
    miniCooper.print();
    
    Car car;
    Car::model = "amaze";
    car.setModel("amaze new");
    car.print();
    
}


// output

// model: mini2
// noOfCars 0
// owner  patel
// model: amaze new
// noOfCars 0
// owner  patel