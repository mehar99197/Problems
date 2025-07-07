#include <iostream>
using namespace std;

void update(int *a, int *b) {
    int original_a = *a; // Store the original value of a
    *a = original_a + *b; // Update a to the sum of original a and b
    int difference = original_a - *b; // Compute the difference
    *b = difference < 0 ? -difference : difference; // Ensure the difference is non-negative
}

int main() {
    int a, b;
    cin >> a >> b; // Take input from user
    update(&a, &b); // Call the update function
    cout << a << endl << b << endl; // Print the updated values
    return 0;
}