// Find LCM of two numbers.
// Take two numbers.
// Start from the larger number.
// Keep increasing by 1.
// Check:
// num % a == 0
// num % b == 0
// If both true:
// that's the LCM.
// stop.
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int lcm = (a > b) ? a : b;      
    while(true){
        if(lcm % a == 0 && lcm % b == 0){
            cout << lcm;
            break;
        }
        lcm++;
    }
    return 0;
}