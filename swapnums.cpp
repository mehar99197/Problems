#include<iostream>
using namespace std;    
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of a by b to get original a
    a = a - b; // Step 3: Subtract the new value of b from the new value of a to get original b
    
    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}