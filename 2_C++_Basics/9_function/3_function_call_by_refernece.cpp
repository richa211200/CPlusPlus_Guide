// What is Call by refernece? 
// With call by reference, the function receives a reference (or address) to 
// the argument. This allows the function to directly modify the original variable.

// Characteristics of Call by Reference:
// 1)Direct access: The function can directly access and modify the original variable.
// 2)No copy overhead: There's no need to copy the argument, which is more efficient 
// for large objects.
// 3)Changes persist: Modifications within the function affect the original argument.


// First method
// instead of using pointer like second method, we'll directly pass reference
#include<iostream>
using namespace std;

void life(int &age){
    cout<< "life - age: " << age << endl;
    cout<< "life - age value: " << age << endl;

    ++age;
    cout<< "life - after ++age: " << age << endl;
    cout<< "life - after ++age value: " << age << endl;
}

int main() {

    int ageV = 11;

    life(ageV);
    cout<<endl;
    cout << "age address after running life(): " << &ageV <<endl;
    cout << "age value after running life(): " << ageV <<endl;
}

// second method

// #include<iostream>
// using namespace std;

// void life(int* age){
//     cout<< "life - age: " << age << endl;
//     cout<< "life - age value: " << *age << endl;

//     ++(*age);
//     cout<< "life - after ++age: " << age << endl;
//     cout<< "life - after ++age value: " << *age << endl;
// }

// int main() {

//     int ageV = 11;

//     life(&ageV);
//     cout<<endl;
//     cout << "age address after running life(): " << &ageV <<endl;
//     cout << "age value after running life(): " << ageV <<endl;
// }