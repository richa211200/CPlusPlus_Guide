// Template : Templates in C++ are a powerful feature that allows 
//            you to create generic code that can work with any data
//            type, providing flexibility and code reuse

// What Are Templates?
// Templates are a mechanism in C++ that allows you to define functions,
// classes, or structures in a generic way. Instead of writing specific 
// code for each data type, you can use templates to create code that can
// work with any type, enabling compile-time polymorphism.

// Types of Templates
// 1) Function Templates: Allows you to create a generic function that can
//    work with different data types
            // template<typename T>
            // T addme(T a, T b) {
            //     return a + b;
            // }
// 2) Class Templates: Enables you to create generic classes or structures.
//    This is useful for data structures like lists, stacks, or queues that
//    can operate on different types of data.
            // template<typename T>
            // class Stack {
            // private:
            //     std::vector<T> data;
            // public:
            //     void push(T value) { data.push_back(value); }
            //     void pop() { data.pop_back(); }
            //     T top() const { return data.back(); }
            // };

#include <iostream>
using namespace std;

template<typename T>

// int addme(int a, int b) {
//     return a + b;
// }

T addme(T a, T b) {
    return a + b;
}

int main() {

    int num1 = 2;
    int num2 = 3;
    float num3 = 1.5;
    float num4 = 2.3;

    cout << addme(num1, num2) << endl;
    cout << addme(num3, num4) << endl;

}

// Benefits of Using Templates
// Code Reuse: Templates allow you to write code once and use it with different data types, reducing code duplication.
// Type Safety: Since templates are resolved at compile time, you maintain type safety. The compiler checks for type compatibility and issues errors if there's a mismatch.
// Flexibility: Templates can be used to define algorithms, data structures, and even entire systems that work with various types.
// Performance: Since templates are resolved at compile time, they can be as efficient as specifically typed code.


// When to Use Templates
// Generic Algorithms: When creating algorithms or functions that can operate on different data types.
// Generic Data Structures: When defining classes or structures that need to store or manipulate different types of data.
// Library Design: Templates are widely used in C++ standard libraries and other libraries to create flexible, reusable code.


// Differences Between Templates and Generics
// Compile-Time vs. Runtime: In C++, templates are resolved at compile time, creating specific code for each instantiated type. This results in efficient and type-safe code. In contrast, generics in languages like Java or C# are resolved at runtime, allowing for more dynamic behavior but with some type erasure, where specific type information is lost.
// Type Erasure: In Java or C#, generics often involve type erasure, meaning that specific type information might be lost at runtime, leading to some limitations in type checking. In C++, templates retain full type information at compile time.
// Flexibility: C++ templates offer more flexibility in terms of what can be templated (functions, classes, etc.) and how the type information is used. Java and C# generics are generally more limited in scope and do not support templated operators or non-type template parameters.


