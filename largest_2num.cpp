// Find the largest of two numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Largest number: " << a << endl;
    } else if (b > a) {
        cout << "Largest number: " << b << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}