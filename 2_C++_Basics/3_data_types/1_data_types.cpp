// Primitive Data Types

// Primitive 
//      - basic datatypes provided by programming language
//      - represent simple values
//
//   Type       |   Keyword
//______________|______________
//   Boolean         bool
//   Character       char
//   Integer         int
//   Float           float
//   Double          double
//   Valueless       void




// Non-Primitive
//      - more complex and usually constructed by primitive data types
//      - Provides flexibility and complexity needed for advance data management
// Non-Primitive types: string, array, pointers, Structures (struct), references, classes, vectors, lists, maps, sets


// Array --------------------------------------------------------------------------------------------------------------------
//  An array is a collection of elements of the same type, stored in contiguous memory locations. 
//  Arrays in C++ can be fixed-size or dynamic (using data structures like std::vector).
//          int numbers[5];  // Fixed-size array with 5 integers


// Vectors (std::vector)-------------------------------------------------------------------------------------------------------
// std::vector is a dynamic array that can automatically resize. It's part of the C++ Standard Library and 
// provides flexibility and ease of use compared to fixed-size arrays.
//
// #include <vector>
//
// std::vector<int> dynamicArray;
// dynamicArray.push_back(1);
// dynamicArray.push_back(2);


// Lists (std::list)-------------------------------------------------------------------------------------------------------
// std::list is a doubly linked list, allowing for efficient insertion and removal of elements at any position
// in the list.
//
// #include <list>
//
// std::list<int> myList;
// myList.push_back(10);
// myList.push_front(5);


// Maps (std::map, std::unordered_map)-------------------------------------------------------------------------------------------------------
// Maps are associative containers that store key-value pairs. std::map is ordered, while std::unordered_map 
// is unordered and uses hashing.
// 
// #include <map>
//
// std::map<std::string, int> ageMap;
// ageMap["Alice"] = 30;
// ageMap["Bob"] = 25;
//
// #include <unordered_map>
//
// std::unordered_map<std::string, int> hashMap;
// hashMap["Alice"] = 30;


// Sets (std::set, std::unordered_set)-------------------------------------------------------------------------------------------------------
// Sets are collections of unique elements. Like maps, std::set is ordered, while std::unordered_set is unordered.
//
// #include <set>
//
// std::set<int> uniqueNumbers;
// uniqueNumbers.insert(1);
// uniqueNumbers.insert(2);
//
// #include <unordered_set>
//
// std::unordered_set<int> hashSet;
// hashSet.insert(1);


// Pointers----------------------------------------------------------------------------------------------------------------------------------
//  Pointers are variables that store memory addresses. They allow for dynamic memory allocation and 
//  manipulation of objects through references.
//          int value = 10;
//          int* ptr = &value;  // Pointer to the memory address of 'value'


// References:----------------------------------------------------------------------------------------------------------------
//  Reference variable holds some variable value and any change made to reference can change variable value
//          int number = 42;
//          int& ref = number;  // Reference to 'number'


// Strings:-------------------------------------------------------------------------------------------------------------------
//  Strings represent sequences of characters. C++ supports C-style strings (arrays of characters ending with '\0') 
//  and std::string, which is a more flexible, safer string type from the Standard Library.
//          char cStr[] = "Hello";  // C-style string
//          std::string cppStr = "World";  // C++ Standard Library string


// Structures (struct)-------------------------------------------------------------------------------------------------------
// Structure allows you to group different types of data under single name. This is useful for representing 
// complex data structures.
// struct Person {
//     std::string name;
//     int age;
// };
// Person person;
// person.name = "Alice";
// person.age = 30;


// Classes ------------------------------------------------------------------------------------------------------------------
// Classes are a cornerstone of C++'s object-oriented programming (OOP) capabilities. 
// They allow you to define complex data structures with attributes and methods, encapsulation, inheritance, 
// and polymorphism.
//
// class Car {
// public:
//     std::string model;
//     int year;
//
//     void drive() {
//         std::cout << "Driving a " << model << " from " << year << "." << std::endl;
//     }
// };
//
// Car car;
// car.model = "Toyota";
// car.year = 2021;
// car.drive();



#include <iostream>
#include <string> // string is non-primitive data type so we call built in custom class library
using namespace std;

int main(){

    string first_name, last_name;
    cout << "Enter your name: \n";

    cin>> first_name >> last_name;
    cout << "My name is : "<<first_name<< " " <<last_name<< "." <<endl;

    return 0;
}



