// Take length and breadth and calculate area and perimeter of rectangle.

#include <iostream>
using namespace std;

int main(){
    int length , breadth ;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    cout << "Area of rectangle: " << length * breadth << endl;
    cout << "Perimeter of rectangle: " << 2 * (length + breadth) << endl;
    return 0;
}