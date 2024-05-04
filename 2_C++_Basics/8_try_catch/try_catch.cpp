// usecase: 
// put your block of code when you're not sure if it'll run succesfully 
// or there's probability of crash

#include <iostream>
using namespace std;

int main() {

    int call_api = 2;

    try {
        cout<<"trying to use api vale/data"<<endl;
        cout<<"did testing with api value"<<endl;

        throw call_api; //usually we should write if-else block and if you know 
        // you are more likely to face some error throw exception over there

        cout<< "No code will get excuted after return and throw"<<endl;
    }catch(int x){
        cout<<"int exception handled"<<endl;
    }catch(float x){
        cout<<"float exception handled"<<endl;
    }catch(...){//incase if you don't know error code pass ...
        cout<<"Something went wrong"<<endl;
    }

    cout<<"kepp on moving with rest of the code"<<endl;

    return 0;
}