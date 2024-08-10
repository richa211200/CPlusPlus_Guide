// If I use semaphore instead of mutex then my code execution time will decrease?

// Using semaphores instead of mutexes can affect the execution time of your code, 
// but whether it decreases or increases depends on the context and how you use them.
//  Here’s a detailed comparison of semaphores and mutexes and their impact on execution time:




// ### Mutexes
// - **Mutual Exclusion**: 
// Mutexes (mutual exclusion locks) are used to protect critical sections of code 
// that must not be executed by more than one thread at a time.
// - **Ownership**: 
// A mutex can only be locked and unlocked by the same thread,
// ensuring that a critical section is not left unprotected.
// - **Simplicity**: 
// Mutexes are simpler to understand and use for basic locking needs.




// ### Semaphores
// - **Counting Semaphores**: 
// Semaphores can be used for signaling between threads 
//and can allow multiple threads to access a resource up to a certain limit (the semaphore's count).
// - **No Ownership**: 
// Unlike mutexes, semaphores do not enforce ownership rules, 
//meaning any thread can signal (increment) or wait (decrement) the semaphore.
// - **More Flexible**: 
// Semaphores can be used to solve a broader range of 
//synchronization problems, such as controlling access to a pool of resources.




// ### Impact on Execution Time
// - **Context Switching Overhead**: 
// Both mutexes and semaphores can cause context
// switching when a thread is blocked, which incurs some overhead. The performance
// impact of this context switching is generally similar for both primitives.
// - **Contention**: 
// If many threads are contending for the same mutex or semaphore,
// the overhead can be significant. Properly managing contention is crucial for performance.
// - **Granularity of Control**: 
// Semaphores provide finer granularity of control when you need to manage access 
// to a limited set of resources rather than just one. This can potentially reduce
// contention and improve performance in certain scenarios.
// - **Signaling and Waiting**: 
// In some cases, using semaphores for signaling can be more efficient than using
// mutexes with condition variables, as semaphores integrate signaling and waiting
// into a single primitive.




// ### Example Scenario
// Consider a scenario where you have a pool of resources (e.g., database 
// connections or worker threads) that multiple threads need to access:

// - **Using a Mutex**: 
// You would use a mutex to protect access to the pool, which can create a 
// bottleneck if many threads are trying to access the pool simultaneously.
// - **Using a Semaphore**: 
// You can initialize a semaphore with the number of available resources in
// the pool. Threads would wait (decrement) the semaphore before accessing a
// resource and signal (increment) the semaphore after releasing the resource.
// This approach can reduce contention and improve throughput since the semaphore 
// allows multiple threads to proceed concurrently up to the limit of available resources.




// ### Conclusion
// Switching from mutexes to semaphores can decrease execution time if the semaphore's
// flexibility and fine-grained control help reduce contention and efficiently manage
// resources. However, this is highly dependent on the specific use case and how the 
// synchronization is implemented. In some scenarios, a semaphore might introduce 
// unnecessary complexity without significant performance benefits. 




// ### Recommendations
// - **Profiling**: 
// Profile your application to identify where contention and synchronization bottlenecks occur.
// - **Appropriate Tool**: 
// Use mutexes for simple mutual exclusion and semaphores when you need to manage 
// a pool of resources or require more complex signaling between threads.
// - **Hybrid Approaches**: 
// Sometimes, a combination of mutexes and semaphores can provide the best balance
// of simplicity and performance.

// By carefully considering the nature of your concurrency needs, you can choose
// the right synchronization primitive to optimize your code's execution time.