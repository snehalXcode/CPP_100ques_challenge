// Create a function to calculate power.
#include <iostream>
using namespace std;

int power(int a, int b){
    int pow = 1 ;
    for(int i = 1 ; i <= b ; i++){
        pow = pow * a ;
    }
    return pow ;
}
int main(){
    int a, b ;
    cin >> a >> b ;
    cout << power(a, b);
    return 0;
}