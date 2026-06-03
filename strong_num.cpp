// check strong number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while(n > 0)
    {
        int rem = n % 10;

        int fact = 1;

        for(int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;

        n = n / 10;
    }

    if(sum == temp)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}