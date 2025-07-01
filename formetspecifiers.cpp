/*You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.
i.e.
3
12345678912345
a
334.230
14049.304930000
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Input
    cin >> i >> l >> c >> f >> d;

    // Output
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
