// Find GCD of two numbers.
#include <iostream>
using namespace std;

// int main(){
//     int a , b ;
//     cin >> a >> b;
//     while(a != b){
//         if(a > b){
//             a = a - b ;
//         }
//         else{
//             b = b - a ;
//         }
//     }
//     cout << a ;
//     return 0;
// // }
// Take two numbers.
// Find smaller number.
// Run loop from 1 to smaller number.
// Check:
// a%i==0
// b%i==0
// If both true:
// store i in gcd
// After loop ends:
// gcd contains largest common divisor.

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = 1;
    int smaller = (a<b) ? a : b;
    for(int i=1; i<=smaller; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}