// Check whether a character is uppercase or lowercase.
#include <iostream>
using namespace std;
int main () {
    char n ;
    cin >> n ;

    if(n>='A' && n<='Z'){
        cout<<"Uppercase";
    }
    else if(n>='a' && n<='z'){
        cout<<"Lowercase";
    }
    else{
        cout<<"Not an alphabet";
    }
}