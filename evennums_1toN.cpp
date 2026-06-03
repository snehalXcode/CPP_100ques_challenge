// Print all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number";
    cin >> n;

    for(int i = 0 ; i <= n ; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0 ;
}