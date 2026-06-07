#include<iostream>
using namespace std;

// 1: Take 5 Numbers and Print Them
// int main(){
//     int arr[5];
//     for(int i =0 ;i < 5 ;i++){
//         cin >> arr[i];
//     }
//     for(int i =0 ;i < 5 ;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// 2: Print First Element
// int main(){
//     int arr[5];
//     for(int i =0 ;i < 5 ;i++){
//         cin >> arr[i];
//     }
//     cout << arr[0] << endl;
//     return 0;
// }

// 3: Print Last Element
// int main(){
//     int arr[5];
//     for(int i =0 ; i < 5 ;i++){
//         cin >> arr[i];
//     }
//     cout << arr[4] << endl;
//     return 0;
// }

// 4: Print All Elements One Per Line
// int main (){
//     int arr[5];
//     for(int i = 0 ; i < 5 ; i++){
//         cin >> arr[i] ;
//     }
//     for(int i = 0 ; i < 5 ; i++){
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// 5: Count Number of Elements
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];

//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     cout << n << endl ;
//     return 0 ;
// }

// 6: Print Array in Reverse Order
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     for(int i = n-1 ; i>=0 ; i--){
//         cout << arr[i] << " ";
//     }
//     return 0 ;
// }

// 7: Find Sum of Array
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int sum = 0 ;
//     for(int i =0 ; i < n ; i++){
//         sum = sum + arr[i];
//     }
//     cout << sum << endl;
//     return 0;
// }

// 8: Count Positive Numbers
// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 == 0){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 9: Count Negative Numbers
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] < 0){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 10: Count Zeros
// int main() {
//     int n ; 
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == 0){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 11: Print Only Even Numbers
// int main(){
//     int n ; 
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 == 0){
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// 12: Print Only Odd Numbers
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 != 0){
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// 13: Find Largest Number
// int main(){
//     int n ; 
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int larg = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] > larg){
//             larg = arr[i];
//         }
//     }
//     cout << larg << endl;
//     return 0;
// }

// 14: Find Smallest Number
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int small = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] < small){
//             small = arr[i];
//         }
//     }
//     cout << small << endl;
//     return 0;
// }

// 15: Search an Element
// int main (){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int key ;
//     cin >> key ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == key){
//             cout << "Element found at index " << i << endl;
//             return 0;
//         }
//     }
//     cout << "Element not found" << endl;
//     return 0;
// }

// 17: Count Even Numbers
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 == 0){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 18: Count Odd Numbers
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 19: Find Sum of Even Numbers
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int sum = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 == 0){
//             // cout<<arr[i] << " ";
//             sum = sum + arr[i];

//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

// 20: Find Sum of Odd Numbers
int main(){
    int n ; 
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }   
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 != 0){
            // cout << arr[i] << " ";
            sum = sum + arr[i];
        }
    }
    cout << sum << endl;
    return 0;
}