#ifndef LOGIN_H
#define LOGIN_H

namespace login {
    void getAuth();  // Declaration of getAuth
}

#endif  // LOGIN_H


// #ifndef, #define, #endif
// These are include guards. They prevent multiple inclusions of the same header file within a single translation unit
//  (source file). Let's explore how they work:

// #ifndef LOGIN_H:
// This checks if the LOGIN_H macro is not defined. If it's not, it proceeds to the next step. If it is defined, 
// it skips to #endif, thus avoiding re-inclusion of the header.

// #define LOGIN_H:
// This line defines the LOGIN_H macro. It ensures that if this header is included again in the same translation 
// unit, it will be recognized as already included, preventing re-inclusion.

// #endif:
// This marks the end of the include guard. If the header was included multiple times, everything between #ifndef
//  and #endif is ignored after the first inclusion.
// Include guards are crucial to prevent errors caused by multiple definitions. These errors occur when the 
// same declaration or definition is included multiple times within the same source file, leading to compilation issues.


