// Create a function to find maximum of two numbers.
#include <iostream>
using namespace std;

int max2num(int a, int b){
    if(a > b){
        return a ;
    }
    else{
        return b ;
    }
}
int main(){
    int a, b ;
    cin >> a >> b ;
    cout << max2num(a, b);
    return 0;
}