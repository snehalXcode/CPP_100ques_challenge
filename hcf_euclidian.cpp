// Find HCF using Euclidean Algorithm.
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    while(b != 0)
    {
        int rem = a % b;

        a = b;
        b = rem;
    }

    cout << "HCF = " << a;

    return 0;
}