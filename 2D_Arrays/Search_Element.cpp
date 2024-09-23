#include <iostream>
using namespace std;

int main() {
    // Create a 2D array
    int array[4][4] = {
        {3, 5, 7, 9},
        {10, 14, 17, 21},
        {22, 30, 34, 40},
        {41, 44, 50, 55}
    };
    
    // Element to search
    int target = 21;
    
    // Boolean flag to check if the element is found
    bool found = false;
    
    // Search for the element in the 2D array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == target) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    // Print the result
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
