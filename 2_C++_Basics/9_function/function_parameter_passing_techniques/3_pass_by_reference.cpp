// Pass by reference


#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

void getCarDetails(string &owner, string &model, int &year) {

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
// ownerName: Congratulations Richa

// Observation
// Here as we are passing refernece of variable to function,
// We are passing address of variable to that function,
// so any updation to variable made inside function will be updated
// to original variable also

// Usecase: when you want to change value of original input data

// cons: be careful while handling data through this as it will update original input data
