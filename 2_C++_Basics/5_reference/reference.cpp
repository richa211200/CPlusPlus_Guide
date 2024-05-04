// pointer only points to memory location

// reference variable holds some variable value and any change made to reference can change variable value


#include <iostream>
using namespace std;

int main() {

    int score = 200;
    int *myptr = &score;

    cout << "score value " << score << endl;//200
    cout << "myptr address " << myptr <<endl;//abcd

    int another_score = score;
    another_score = 800;

    cout << "\nscore value " << score << endl;//200
    cout << "another_score value " << another_score << endl;//800
    cout << "myptr address " << myptr <<endl;//abcd

//there are two syntax for reference variable
    // int &ref_score = score;
    int *ref_score = &score;
    *ref_score = 1200;
    
    cout << "\nscore value " << score << endl;//1200
    cout << "myptr address " << myptr <<endl;//abcd
    cout << "another_score value " << another_score << endl;//800

    return 0;

}