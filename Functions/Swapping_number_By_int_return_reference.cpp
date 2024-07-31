// --> Example - 2 By Call By Reference:-

#include <iostream>
using namespace std;

// Function to swap two integers and return 1 if the swap was successful
int swapAndCheck(int &a, int &b) {
    int temp = a; // Save the value of 'a' in 'temp'
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;     // Assign the value of 'temp' (original 'a') to 'b'
    return 1;     // Return 1 to indicate the swap was successful
}

int main() {
    int a, b;

    // Input for the first number
    cout << "Enter the first number: ";
    cin >> a;

    // Input for the second number
    cout << "Enter the second number: ";
    cin >> b;

    // Calling the swapAndCheck function and capturing the return value
    int result = swapAndCheck(a, b);

    // Output the swapped values and the result of the swap
    cout << "The numbers after swapping are: " << a << " and " << b << endl;
    cout << "Result of the swap function: " << result << endl;

    return 0;
}