#include <iostream>
#include <string>

using namespace std;

// function to reverse digits of a number
int reverse_digits(int num) {
    int reversed_num = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed_num = (reversed_num * 10) + digit;
        num /= 10;
    }
    return reversed_num;
}

int main() {
    // check for good, bad, poor number
    int m;
    cout << "Enter an integer: 15 ";
    cin >> m;

    if (m % 3 == 0 && m % 5 == 0) {
        cout << "Good Number" << endl;
    } else if (m % 3 == 0) {
        cout << "Bad Number" << endl;
    } else if (m % 5 == 0) {
        cout << "Poor Number" << endl;
    } else {
        cout << "-1" << endl;
    }

    // reverse digits of a number
    int n;
    cout << "Enter a number:12345  ";
    cin >> n;

    int reversed_num = reverse_digits(n);
    cout << "Reversed digits:54321 " << reversed_num << endl;

    return 0;
}
