
// Terminlogies:
// Formarl parameter: 
//      Formal parameters are variables that are declared in function
//      definition and are used to hold actual parameters passed to 
//      function. In example, a and b are the formal parameters that 
//      are declared in the function definition of add
// Actual parameter :

// 
// example to understand this:

// int add(int a, int b){  // int a and int b are formal parameters here

//     return a+b;
// }

// int main(){

//     int num1, num2;
//     add(num1, num2); // here num1 and num2are actual parameters
// }

// ---------------------------------------------------------------------------------

// 3 parameter passing techniques in functions:
// 1. pass by value / call by value
// 2. pass by reference
// 3. pass by pointer

// PASS BY VALUE method

#include<bits/stdc++.h>
using namespace std;

void getCarDetails(string owner, string model, int year) {

    owner = "Congratulations " + owner;
    cout << "owner: " << owner << endl;
    cout << "model: " << model << endl;
    cout << "year: "  << year << endl;

}


int main() {

    string ownerName = "Richa";
    string modelOfCar = "Honda";
    int year = 2024;

    getCarDetails(ownerName, modelOfCar, year);

    cout << "ownerName: " << ownerName << endl;
}

// output

// owner: Congratulations Richa
// model: Honda
// year: 2024
// ownerName: Richa

// observation: 
// As here we're using pass by value means we make copy of original 
// variable and we send that to function, so inside function if we 
// modify value it won't update original variable's value which we
// passed to function

// usecase: use this when you want to avoid updation to original input data

// cons: not good to use for large sized datastructure because it makes copy of data


