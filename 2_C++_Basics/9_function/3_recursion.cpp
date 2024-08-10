// recursion : function that calls itseld again and again but with exit strategy

// example to use recursion with calculate factorial problem

#include <iostream>
using namespace std;

int factorial(int n);

int main() {

    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout << "factorial of " << n<< " is : " << factorial(n) << endl;

}

int factorial(int n){

    if( n > 1){
        return n * factorial (n-1);
    }else{
        return 1; //becuase factorial of 1 is 1 itself
    }
}