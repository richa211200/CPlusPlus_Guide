// pointer - points to a memory location


#include <iostream>
using namespace  std;

int main(){

    int value = 21;
    int *ptr = &value;

    cout << "value : " << value << endl;
    cout << "ptr value : " << *ptr<< endl;
    cout << "ptr address : " << &ptr<< endl;
    cout << "ptr address 2: "<< ptr <<endl;

    int my_card = value;
    cout << "my_card assigned value: " << my_card << endl;
    my_card = 30;
    cout << "my_card assigned value 2: " << my_card << endl;

    my_card = *ptr; //pointer dereferencing
    // Dereferencing is accessing value stored at memory location 
    // a pointer is pointing to
    my_card = 50;
    cout << "my_card  dereferencing: " << my_card << endl;
    cout << "ptr value : " << *ptr<< endl;

    return 0;
}

// output:
// value : 21
// ptr value : 21
// ptr address : 0x7ffd948638e0
// ptr address 2: 0x7ffd948638d8
// my_card assigned value: 21
// my_card assigned value 2: 30
// my_card  dereferencing: 50
// ptr value : 21