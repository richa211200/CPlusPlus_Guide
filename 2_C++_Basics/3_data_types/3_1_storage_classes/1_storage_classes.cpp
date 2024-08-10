// article: https://www.geeksforgeeks.org/storage-classes-in-c-with-examples/

// auto
// from c++ 11, auto keyword is not used to declare auto variables
// if variable is declared inside block it's auto variable

// extern
// extern means variable is defined somewhere else and not in scope/block where
// it's used - external linkage
// value assinged to it is in diff block and can be overwritten
// use: extern varibales can be accessed globaly in large program &
// can be used between two diff files

// static
// static varibale has property of preserving value outside thier scope
// it preserves last value assigned to it
// static variables are initialised only once and they exist till termination of program

// register
// register varibale is declared using register keyword
// it's similar to auto variable but only difference is if free register in microprocessor
// is available then it uses regsiter variable to store varable value
// if free register is not available then it's stored in memory itself
// imp point: we can't access address of register variable using pointer

// mutable
// when you want to allow few members of class/struct to be modified by const of object
// of that class you can declare those variables mutable in parent class

// example of mutable

#include<bits/stdc++.h>
using namespace std;

class Car {
    
    private:
    int noOfCars;
    
    public:
    
    mutable string model;
    
    Car(string model_="Honda", int noCars=0) : model(model_), noOfCars(noCars) {}
    
    void print() const {
        cout << "model: " << model<<endl;
        cout << "noOfCars " << noOfCars << endl;
    }
    
    void setModel(const string& model_) {
        this->model = model_;
    }
    
};


int main(){
    
    Car miniCooper;
    miniCooper.setModel("mini");
    miniCooper.print();
    
    Car car("",2);
    car.model = "amaze";
    car.setModel("amaze new");
    
    car.print();
    
}

// output:

// model: mini
// noOfCars 0
// model: amaze new
// noOfCars 2