// namespace is way to organise code to avoid conflicts

// definition : A namespace is a declarative region that provides a scope to the identifiers 
//              (the names of types, functions, variables, etc) inside it. Namespaces are used 
//              to organize code into logical groups and to prevent name collisions that can occur 
//              especially when your code base includes multiple libraries.


// Real world example: 
// - during pair programming 
//   -if programmer 1 create login.cpp and define getAuth() function in login.cpp
//   -if programmer 2 create signUp.cpp and define getAuth() function in signUp.cpp
// while calling both auth methods in main() , to differentiate them we can give scope
// ex: login::getAuth(), signUp::getAuth()  - this is namespace


// // login.cpp
// #include <iostream>

// namespace login {
//     void getAuth() {
//         std::cout << "Authenticating via login method." << std::endl;
//     }
// }

// // signUp.cpp
// #include <iostream>

// namespace signUp {
//     void getAuth() {
//         std::cout << "Authenticating via sign-up method." << std::endl;
//     }
// }


#include <iostream>
#include "login.h"  // Include login implementation
#include "signUp.h"  // Include sign-up implementation

int main() {
    login::getAuth();  // Call getAuth from the login namespace
    signUp::getAuth();  // Call getAuth from the signUp namespace
    return 0;
}

