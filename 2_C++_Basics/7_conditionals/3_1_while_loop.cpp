// three types of loops
// 1. while loop
// 2. do while loop
// 3. for loop

// there are 3 things to keep in mind when working with loops
// - where the condition is getting tested
// - what condition is getting tested?
// - change the value that is getting tested

#include <iostream>
using namespace std;

int main(){

    int my_arr[] = {4,5,6,7,8,9,0};

    int i = 0;

    while(i < 7) {
        // cout<< "index: " << i << " value: "<<my_arr[i]<<endl; 
        i++;
    }

    i = 0; // again making it 0, because first loop has made i = 7, so second loop won't execute!

    while(i < 7) {
        // we can run some special block of code also when loop reach some index or
        // if in loop at some index if find some string value and filter that value
        // and excute something for the particular value
        if(i == 3) {
            i++;
            cout<<"skip this index: " << i <<endl;
            continue; 
            // means it will increment i to 4 due to post increment and then due to continue it will exit loop
            // and won't excute any statements inside while loop 
        }

        cout<< "index: " << i << " value: "<<my_arr[i]<<endl; 
        i++;
    }

    return 0;

}