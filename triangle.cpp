// Determine whether a triangle is valid using three sides.
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >>a>>b>>c;

    if(a+b+c==180){
        cout<<"Valid triangle";
        if (a==b && b==c){
            cout<<"Equilateral triangle";
        }
        else if(a==b || b==c || a==c){
            cout<<"Isosceles triangle";
        }
        else{
            cout<<"Scalene triangle";
        }
    }
    else{
        cout<<"Invalid triangle";
    }
    return 0;
}