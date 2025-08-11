// The program is designed to find and return the maximum value among four given integers. The user inputs four integers, and the program determines the largest of these four numbers by comparing them in pairs. The result is then printed as the output.
#include <iostream>
#include <algorithm>

using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
    return 0;
}