// An `enum` (short for "enumeration") in C++ is a user-defined type that consists
//  of a set of named integral constants. 


// Enumerations allow you to create a type with a fixed range of possible values,
// which can improve code readability and maintainability by using meaningful names
// instead of arbitrary numbers.

// Here's a basic definition of an `enum` in C++:

#include <iostream>

// Define an enumeration for the days of the week
enum class Day {
    Sunday,   // 0
    Monday,   // 1
    Tuesday,  // 2
    Wednesday, // 3
    Thursday, // 4
    Friday,   // 5
    Saturday  // 6
};


// - You can define an `enum` without `class` or `struct` (traditional enum). In that case,
//  the enumerators are unscoped, meaning they can be used without a prefix, but this approach
// is more prone to name conflicts.
enum Color {
    Red,    // 0
    Green,  // 1
    Blue    // 2
};

int main() {
    // Declare a variable of type Day
    Day today = Day::Wednesday;

    // Check the value and print the corresponding day
    if (today == Day::Wednesday) {
        std::cout << "It's Wednesday!" << std::endl;
    }

    Color myColor = Green; // Unscoped enum, no prefix needed

    if (myColor == Green) {
        std::cout << "The color is green!" << std::endl;
    }

    return 0;
}

// In this example:

// - The `enum class Day` defines a set of constants representing the days of the week. 
// By default, enumerators start from 0 and increment by 1, but you can explicitly assign
// integer values to the enumerators if needed.

// - The keyword `enum class` is used to create a scoped enumeration. Scoped enumerations 
// require you to use the `Day::` prefix when referring to an enumerator, which helps avoid
// name conflicts.

// In summary, enumerations are useful when you have a limited set of constant values that
// you want to represent with descriptive names. Scoped enums (`enum class`) are generally
// recommended for their improved type safety and reduced risk of name conflicts, while unscoped
// enums are more traditional and may still be found in older codebases.