#include <iostream>
#include "addition.h"
#include "addition.h"
#include "addition.h"
#include "addition.h"
#include "addition.h"

// even after including .h multiple times it will only process it once
// The behavior you're observing is exactly what include guards are 
// designed to achieve: preventing multiple inclusions of the same header 
// file within a single translation unit. When you include the same header 
// file multiple times, the include guard ensures that the content inside 
// the #ifndef and #endif block is only processed once, even if the header 
// file is included multiple times.

using namespace std;

int main() {
    cout<< addme(1,2) << endl;
}



