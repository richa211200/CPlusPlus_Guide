// switch is like if-else ladder
// we check varibale against multiple test cases
// after testing your variable with all given testcase, its not true for any of it then we have default condition to excute

#include <iostream>
using namespace std;

int main(){

    int rating = 4;

    switch (rating)
    {
    case 1:
        cout << "Rating is 1"<<endl;
        break;
    case 2:
        cout << "Rating is 2"<<endl;
        break;
    case 3:
        cout << "Rating is 3"<<endl;
        break;
    case 4:
        cout << "Rating is 4"<<endl;
        break;
    case 5:
        cout << "Rating is 5"<<endl;
        break;
    
    default:
        cout<<"Rating can be only between 1 to 5";
        break;
    }
}