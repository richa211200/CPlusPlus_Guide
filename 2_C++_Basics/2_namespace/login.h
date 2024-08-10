#ifndef LOGIN_H
#define LOGIN_H

namespace login {
    void getAuth();  // Declaration of getAuth
}

#endif  // LOGIN_H


// #ifndef, #define, #endif
// These are include guards. They prevent multiple inclusions of same header 
// file within single translation unit (source file). Let's explore how they work:

// #ifndef LOGIN_H:
// This checks if LOGIN_H macro is not defined. If it's not, it proceeds to 
// next step. If it is defined, it skips to #endif, thus avoiding re-inclusion of header.

// #define LOGIN_H:
// This line defines LOGIN_H macro. It ensures that if this header is included again in
// same translation unit, it will be recognized as already included, preventing re-inclusion.

// #endif:
// This marks end of include guard. If header was included multiple times, 
// everything between #ifndef and #endif is ignored after first inclusion.
// Include guards are crucial to prevent errors caused by multiple definitions. 
// These errors occur when same declaration or definition is included multiple times
// within same source file, leading to compilation issues.


