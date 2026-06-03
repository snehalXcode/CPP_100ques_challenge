// Check whether a number is prime.
#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;

    for(int i = 2 ; i <= n ; i++){
        if(n%i != 0){
            cout<<"Prime";
            break;
        }
        else{
            cout<<"Not a prime";
            break;
        }
    }
    return 0;
}