// friend
    // if you want to give access of your private data members you can
    // declare that class frined in your base class

// declaring class frined is not good practice because we're giving access
// of all the private members to derived class

#include <iostream>
using namespace std;

class Man{

    string name;
    int age;

    friend class SpiderMan;

protected:
    void run(){cout << "defaualt run () " << endl;}    

public:
    void sayName();

};


void Man::sayName() {
    // as these has scope of Man class we are able to access private members too
    name = "r";
    age = 8;
    cout << "Name is : " << name << endl;
    cout << "age is : " << age << endl;
}

class SpiderMan : public Man {

public:
    void sayName(){
        name = "abcd";
        age = 11;
        // as these are private members we can't access directly,
        // to resolve this we'll declare class spiderman as friend
        cout << "Name is : " << name << endl; 
        cout << "age is : " << age << endl;
    }
};

int main(){

    Man man;
    man.sayName();

    SpiderMan peter;
    peter.sayName();

    return 0;
}