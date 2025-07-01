#include<iostream>
using namespace std;
int main(){
    int num, reversedNum = 0, remainder;
    cout << "Enter an integer: ";
    cin >> num;
    while(num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from num
    }
    cout << "Reversed Number: " << reversedNum << endl;
    return 0;
    // Reverse the integer
}