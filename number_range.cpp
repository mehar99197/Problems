#include <iostream>
#include <string>
using namespace std;

// Function to convert number to words (supports up to 9999)
string numberToWords(int num) {
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string result = "";

    if (num == 0) return "zero";
    if (num >= 1000) {
        result += ones[num / 1000] + " thousand ";
        num %= 1000;
    }
    if (num >= 100) {
        result += ones[num / 100] + " hundred ";
        num %= 100;
    }
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        result += teens[num - 10] + " ";
        num = 0;
    }
    if (num > 0) {
        result += ones[num] + " ";
    }
    // Remove trailing space
    if (!result.empty() && result[result.size() - 1] == ' ')
        result.pop_back();
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << numberToWords(i) << endl;
    }
    return 0;
}
