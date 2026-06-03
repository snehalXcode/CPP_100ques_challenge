// Create a function to check even/odd.
#include <iostream>
using namespace std;

int evenOdd(int n){
    if(n%2 == 0){
        return 0; // Even
    }
    else{
        return 1; // Odd
    }
}
int main(){
    int n ;
    cin >> n ;
    if(evenOdd(n) == 0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 0;
}