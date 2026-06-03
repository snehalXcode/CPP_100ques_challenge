// Find the largest of three numbers.

#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "Largest number: " << a << endl;
    } else if (b > a && b > c) {
        cout << "Largest number: " << b << endl;
    } else if (c > a && c > b) {
        cout << "Largest number: " << c << endl;
    } else {
        cout << "There is a tie for the largest number." << endl;
    }
}