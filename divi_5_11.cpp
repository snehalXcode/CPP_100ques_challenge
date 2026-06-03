// Check whether a number is divisible by both 5 and 11.

#include <iostream>
using namespace std;

int main (){
    int n ;
    cin >> n;
  
    if (n % 5 == 0 && n % 11 == 0) {
        cout << n << " is divisible by both 5 and 11." << endl;
    } else {
        cout << n << " is not divisible by both 5 and 11." << endl;
    }
    return 0;
}