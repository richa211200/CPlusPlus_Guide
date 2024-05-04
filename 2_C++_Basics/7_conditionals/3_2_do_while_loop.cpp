// usecase: when you write code for hardware, sensors

#include <iostream>
using namespace std;

int main(){

    int my_arr[] = {3,4,5,6,7,8,9};

    int i = 0;

    do {
        cout<< "index: " << i << " value: "<<my_arr[i]<<endl; 
        i++;
    }while(i<5);

    cout << endl;
    cout << "example to show do while always get executed at least once even if while condition is wronf in first place" <<endl;
    i = 8;

    do {
        cout<< "index: " << i << " value: "<<my_arr[i]<<endl; 
        i++;
    }while(i<5);

    return 0;
}

//output

// index: 0 value: 3
// index: 1 value: 4
// index: 2 value: 5
// index: 3 value: 6
// index: 4 value: 7

// example to show do while always get executed at least once even if while condition is wronf in first place
// index: 8 value: 0