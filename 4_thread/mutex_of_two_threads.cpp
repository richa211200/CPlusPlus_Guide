#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for protecting shared resource
int counter = 0; // Shared resource

// Function to increment the counter
void incrementCounter(int id) {
    for (int i = 0; i < 100; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock the mutex
        ++counter; // Critical section
        // Optionally print the thread id and counter value
        // std::cout << "Thread " << id << " incremented counter to " << counter << std::endl;
    }
}

int main() {
    std::thread t1(incrementCounter, 1);
    std::thread t2(incrementCounter, 2);

    // Wait for both threads to finish
    t1.join();
    t2.join();

    // Print the final counter value
    std::cout << "Final counter value: " << counter << std::endl;

    return 0;
}
