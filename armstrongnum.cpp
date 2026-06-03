// Check whether a number is Armstrong.

#include <iostream>
#include <cmath>    
using namespace std;

int main () {
    int n ;
    cin >> n;
    int temp = n ;
    int sum = 0 ;
    while(n!=0){
        int digit = n%10;
        sum = sum + pow(digit,3);
        n = n/10;
    }
    if(temp == sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
}