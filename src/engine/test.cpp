#include <iostream> // Required for input/output operations

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers, return an error indicator
    } else if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a non-negative integer to calculate its factorial: ";

    // Read the user's input
    std::cin >> number;

    // Calculate the factorial using the function
    long long result = factorial(number);

    // Display the result
    if (result == -1) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "The factorial of " << number << " is: " << result << std::endl;
    }

    return 0; // Indicate successful execution
}
