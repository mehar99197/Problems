#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n, i;
    for(i = 0; i <= 10; i++){
        n = rand() % 101; // Generate random number between 0 and 100
        cout << n << endl; // Print the random number
    }
    cout << "Random numbers generated successfully." << endl;
return 0;
}