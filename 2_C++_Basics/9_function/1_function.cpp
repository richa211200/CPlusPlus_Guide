// Resource: https://www.geeksforgeeks.org/functions-in-cpp/

// function: is block of code
// for best practice/code readability-maintainability always try to write 
// new function for each logic 

// Syntax :
// what_I_will_give_back functionName(What_you_have_to_give_me){
    
    //what function will do

    // return 0;
    // nothing execute after return
// }

#include <iostream>
using namespace std;

int sayTwo();
int add (int a, int b);

int sayTwo(){

    int temp = 2;
    cout<<"in sayTwo : " << temp <<endl;
    return temp;
}

void sayThree(){
    cout<<"in sayThree: 3"<<endl;
}

int add (int a, int b) {
	return a + b;
}


int main() {

    cout << "sayTwo() called : "<< endl;
    sayTwo();
    cout << "sayTwo() done : "<< endl;

    int sum = 5 + sayTwo(); // after done sayTwo is called here so it prints in saytwo again
    cout<< "sum : " << sum <<endl;
    sayThree();

    add ( 2, 3) ;
		
	int sum2 = add (3,4) + 5;
	cout << "sum : " << sum2 << endl; 

    return 0;
}