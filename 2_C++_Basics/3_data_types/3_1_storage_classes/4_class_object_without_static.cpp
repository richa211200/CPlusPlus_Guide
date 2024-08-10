// ref: https://www.geeksforgeeks.org/static-keyword-cpp/


#include <bits/stdc++.h>
using namespace std;

class Car {

    public:

    Car(){
        cout << "inside constructor "<< endl;
    }

    ~Car(){
        cout << "inside destructor " << endl;
    }
};


int main(){

    int x = 0;

    if(x==0){ 
        Car car;
    }

    cout << "End of main " << endl;
}

// output

// inside constructor 
// inside destructor 
// End of main 