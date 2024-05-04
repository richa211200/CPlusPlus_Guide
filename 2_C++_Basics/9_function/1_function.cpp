// function: is block of code
// for best practice/code readability-maintainability always try to write new function for each logic 

// syntax - function
// what_I_will_give_back functionName(What_you_have_to_give_me){
    
    //what function will do

    // return 0;
    // nothing execute after return
// }

#include <iostream>
using namespace std;

int sayTwo();

int sayTwo(){

    int temp = 2;
    cout<<temp<<endl;
    return temp;
}

void sayThree(){
    cout<<"3"<<endl;
}

int main() {

    sayTwo();
    int sum = sayTwo() + 5;
    cout<< sum <<endl;
    sayThree();


    return 0;
}