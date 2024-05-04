// there are two types of for loops
// - for loop
// - for each loop / for range based loop

#include <iostream>
using namespace std;

int main(){

    int my_arr[] = {2, 3, 4 ,5 ,6};

    cout<< "for loop"<<endl;

    for (int i = 0; i < 5 ; i++) {
        cout << "index: " << i<< " value: " << my_arr[i] <<endl;
    }

    // syntax of for each loop ------------------------------------------------------------
    //
    // for(range declaration : range expression) {
    //    statements
    // }
    cout <<endl;
    
    cout<< "for each loop"<<endl;

    for (int i : my_arr) {
        cout << "index: " << i<< " value: " << my_arr[i] <<endl;
    }

    // char array
    char my_string[] = "hitesh";
    char my_char_string[] = {'h','i','t','e','s','h', 0};
    char name[] = {'h','i','t','e','s','0','h', 0};

    cout << "my_string : " << my_string;
    cout <<endl;

    for(int i = 0; my_string[i] != 0; i++){
        cout << "my_char_string : " << my_string[i] <<endl;
    }

    cout<<endl;

    for(int i = 0; my_char_string[i] != 0; i++){
        cout << "my_char_string : " << my_char_string[i] <<endl;
    }
    
    for(int i = 0; name[i] != 0; i++){
        cout << "name : " << name[i] <<endl;
    }
    
    return 0;
}
//output

// for loop
// index: 0 value: 2
// index: 1 value: 3
// index: 2 value: 4
// index: 3 value: 5
// index: 4 value: 6

// for each loop
// index: 2 value: 4
// index: 3 value: 5
// index: 4 value: 6
// index: 5 value: 0
// index: 6 value: 0
// my_string : hitesh

// my_char_string : h
// my_char_string : i
// my_char_string : t
// my_char_string : e
// my_char_string : s
// my_char_string : h

// my_char_string : h
// my_char_string : i
// my_char_string : t
// my_char_string : e
// my_char_string : s
// my_char_string : h
// name : h
// name : i
// name : t
// name : e
// name : s
// name : 0
// name : h