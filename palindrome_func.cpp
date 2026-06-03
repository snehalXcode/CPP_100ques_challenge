// Create a function to check palindrome.
#include <iostream>
using namespace std;

int palindrome(int n){
    int rev = 0 ;
    int temp = n ;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(rev == temp){
        return 1; // Palindrome
    }
    else{
        return 0; // Not a palindrome
    }
}
int main(){
    int n ;
    cin >> n ;
    if(palindrome(n) == 1){
        cout << "Palindrome";
    }
    else{
        cout << "Not a palindrome";
    }
    return 0;
}