// ref: https://www.geeksforgeeks.org/static-keyword-cpp/

// Use cases :
// - We make class object static for singleton pattern
// - 

#include<bits/stdc++.h>
using namespace std;

class Car{

    public:

    Car(){
        cout << "inside constructor " << endl;
    }

    ~Car(){
        cout << "inside destructor " << endl;
    }
};

int main(){

    int x = 0;

    if(x==0){
        static Car car;
    }

    cout << "end of main " << endl;

}
