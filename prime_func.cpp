// Create a function to check prime.
#include <iostream>
using namespace std;    

int prime(int n){
    for(int i = 2 ; i <= n ; i++){
        if(n%i != 0){
            return 1; // Prime
        }
        else{
            return 0; // Not a prime
        }
    }
}
int main(){
    int n ;
    cin >> n ;
    if(prime(n) == 1){
        cout << "Prime";
    }
    else{
        cout << "Not a prime";
    }
    return 0;
}