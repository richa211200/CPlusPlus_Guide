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

    my_card = *ptr; //pointer dereferencing
    // Dereferencing is accessing the value stored at the memory location 
    // a pointer is pointing to
    cout << "my_card  dereferencing: " << my_card << endl;

    return 0;
}

// output:
// value : 21
// ptr value : 21
// ptr address : 0x7ffe48ae9670
// my_card assigned value: 21
// my_card  dereferencing: 21