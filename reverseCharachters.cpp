#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    int length = 0;
    for(int i = 0; arr[i] != 0; i++)
    {
        length++;
    }
    for(int i = length - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;  
}