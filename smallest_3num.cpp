// Find the smallest among three numbers.
#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c;

    if (a < b && a < c) {
        cout << "Smallest number: " << a << endl;
    } else if (b < a && b < c) {
        cout << "Smallest number: " << b << endl;
    } else if (c < a && c < b) {
        cout << "Smallest number: " << c << endl;
    } else {
        cout << "There is a tie for the smallest number." << endl;
    }
}