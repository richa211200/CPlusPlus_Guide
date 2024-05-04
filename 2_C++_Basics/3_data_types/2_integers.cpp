// integers

// short int
// int
// long int
// long long int
// unsigned short int
// unsigned int
// unsigned long int
// unsigned long long int

// like this we can get sixe of char, bool, float, double etc too
#include <iostream>
#include <cstdint> //to resolve sixeof() ambiguity we use cstdint library of c++
using namespace std;

int main(){

    printf("Size of char data type is: %ld bits \n ", sizeof(char) * 8);
    printf("Size of bool data type is: %ld bits \n", sizeof(bool) * 8);
    printf("Size of float data type is: %ld bits \n", sizeof(float) * 8);
    printf("Size of double data type is: %ld bits \n", sizeof(double) * 8);
    cout<<endl;

    printf("Size of short int data type is: %ld bits \n ", sizeof(short int) * 8);
    cout<<endl;

    printf("Size of int data type is: %ld bits \n ", sizeof(int) * 8);
    cout<<endl;

    printf("Size of long int is: %ld bits \n ", sizeof(long int) * 8);
    cout<<endl;

    printf("Size of long long int is: %ld bits \n ", sizeof(long long int) * 8);
    cout<<endl;

    printf("Size of unsigned short int is: %ld bits \n ", sizeof(unsigned short int) * 8);
    cout<<endl;

    printf("Size of unsigned int is: %ld bits \n ", sizeof(unsigned int) * 8);
    cout<<endl;

    printf("Size of unsigned long int is: %ld bits \n ", sizeof(unsigned long int) * 8);
    cout<<endl;

    printf("Size of unsigned long long int is: %ld bits \n ", sizeof(unsigned long long int) * 8);
    cout<<endl;

    cout <<endl;
    cout <<"there's ambiguity while using sizeof "<<endl;
    printf("Size of long is: %ld bits \n ", sizeof(long) * 8);
    printf("Size of short is: %ld bits \n ", sizeof(short) * 8);
    printf("Size of signed is: %ld bits \n ", sizeof(signed) * 8);
    printf("Size of unsigned is: %ld bits \n ", sizeof(unsigned) * 8);

    cout<<endl;
    cout <<"to resolve this ambiguity we use cstdint library of c++"<<endl;
    printf("Size of int8_t datatype is: %ld bits \n ", sizeof(int8_t) * 8);
    printf("Size of int16_t datatype is: %ld bits \n ", sizeof(int16_t) * 8);
    printf("Size of int32_t datatype is: %ld bits \n ", sizeof(int32_t) * 8);
    printf("Size of int64_t datatype is: %ld bits \n ", sizeof(int64_t) * 8);


    return 0;
}