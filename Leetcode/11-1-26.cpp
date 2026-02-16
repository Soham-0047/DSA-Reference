// 11-1-26.cpp
// This program demonstrates a recursive function that prints numbers from n down to 1

#include <iostream>
using namespace std;

/**
 * @brief A recursive function that prints numbers from n down to 1
 * @param n The starting number
 */
void recursiveFunction(int n) {
    // Base case: if n is less than 1, stop the recursion
    if (n < 1) {
        return;
    }
    
    // Print the current value of n
    cout << n << " ";
    
    // Recursive call with n-1
    recursiveFunction(n - 1);
}

// Recursive fuction for n!

int factorialN(int n){
    if(n<1) return 1;
    cout<<n<<" ";
    return n * factorialN(n-1);
}

int main() {
    // Call the recursive function with initial value 5000
    // This will print numbers from 5000 down to 1
    // recursiveFunction(5);
    cout<<factorialN(4)<<endl;
    return 0;
}