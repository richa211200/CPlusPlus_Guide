// reference: https://www.geeksforgeeks.org/inline-functions-cpp/


// inline function - 

// use: to reduce function call overhead

// --> Inline function get expanded in line where it's called, whole code
//     of inline function gets substituted, substitution is done at compile time
// --> In normal function flow control goes and function executes, When program
//     executes function call instruction CPU stores memory address of instruction
//     following function call, copies arguments of function on stack, and finally
//     transfers control to specified function. The CPU then executes function code,
//     stores the function return value in a predefined memory location/register, 
//     and returns control to calling function.

// syntax: 
// inline returntype function(parameters) {
//      function body
// }

// Pros:
// Inline functions Advantages: 
// -> Function call overhead doesn’t occur. 
// -> It also saves the overhead of push/pop variables on the stack when a function is called. 
// -> It also saves the overhead of a return call from a function. 

