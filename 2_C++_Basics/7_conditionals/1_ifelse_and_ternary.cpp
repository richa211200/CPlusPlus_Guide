// conditionals
// two type of conditionals in c++
//      1. if-else block
//      2. ternary operator

// if - else block 
// condition in if block is true that will execute if its false else block will excute

#include <iostream>
using namespace std;

int main(){

    int rating =4;

    // if -else block
    if(rating == 5 ){
        cout << "5 star rated"<<endl;
    }else {
        cout << "Not 5 star rated"<<endl;
    }

    //anything other than 0,NULL,false you keep in if condition the if block will excute
    // examples
    if(0){
        cout<<"go for it 1"<<endl;
    }

    if(false){
        cout<<"go for it 2"<<endl;
    }

    if(NULL){
        cout<<"go for it 3"<<endl;
    }

    if(true){
        cout<<"go for it 4"<<endl;
    }

    if(1){
        cout<<"go for it 5"<<endl;
    }

    if(21){
        cout<<"go for it 6"<<endl;
    }

    //ternary operator 
    // syntax: condition ? "statements to be excuted when true" : "statements to be excuted when false" 
    //- if condition before ? is true statement after ? will execute
    //- if condition after ? is false statement after : will execute

    string result = rating == 5 ? "awesome 5 star rating" : "uhh..not 5 star rating..keep going :) ..slow but steady wins the race :)";
    cout << result << endl;



    return 0;
}