// Call By Reference Concept


#include <iostream>
using namespace std;

// Function to swap two integers
void swapping(int &a, int &b) {
    int temp = a; // Save the value of 'a' in 'temp'
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;     // Assign the value of 'temp' (original 'a') to 'b'
};

int main() {
    int a, b;

    // Input for the first number
    cout << "Enter the first number: " << endl;
    cin >> a;

    // Input for the second number
    cout << "Enter the second number: " << endl;
    cin >> b;

    // Calling the swapping function
    swapping(a, b);

    // Output the swapped values
    cout << "The numbers after swapping are: " << a << " and " << b << endl;
    return 0;
};

