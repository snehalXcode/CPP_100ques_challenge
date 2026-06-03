// Check whether a number is automorphic.
#include <iostream>
using namespace std;    

int main(){
    int n ;
    cin >> n;
    int square = n * n ;
    int temp = n ;
    bool isAutomorphic = true ;

    while(temp > 0){
        if(temp % 10 != square % 10){
            isAutomorphic = false ;
            break;
        }
        temp = temp / 10 ;
        square = square / 10 ;
    }

    if(isAutomorphic){
        cout << "Automorphic number";
    }
    else{
        cout << "Not an automorphic number";
    }
    return 0;
}