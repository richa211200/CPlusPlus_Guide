// The #ifndef, #define, and #endif preprocessor directives are used to prevent
//  multiple inclusions of this header file. This pattern is known as an include 
//  guard. It ensures that the contents of the header file are only included once 
//  during compilation, preventing redefinition errors.

#ifndef addition_h
#define addition_h

int addme(int a, int b) {
    return a + b;
}

float addme(float a, float b) {
    return a + b ;
}

#endif