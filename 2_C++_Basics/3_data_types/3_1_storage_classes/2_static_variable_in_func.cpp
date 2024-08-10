// article: https://www.geeksforgeeks.org/storage-classes-in-c-with-examples/
// article: static : https://www.geeksforgeeks.org/static-keyword-cpp/

// static
// -it has property of preserving value outside thier scope
// -it preserves last value assigned to it
// -they are initialised only once and they exist till termination of program
// -there cannot be multiple copies of same static variable for diff objects
// -so it cannot be initialised through constructor because it'll have multiple 
// shared objects which can modify it

#include <iostream>
using namespace std;

class StaticConcept{

    public:

    static int count; 

    StaticConcept(){
        // count = 9;
    }
};

int StaticConcept::count = 10;

int main(){

    StaticConcept c;
    c.count = 21;

    cout << "count : " << c.count << endl;
}
