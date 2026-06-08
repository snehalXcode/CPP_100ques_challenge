#include <iostream>
using namespace std;

// Check if array is sorted.
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     bool sorted = true ;
//     for(int i = 0 ; i < n-1 ; i++){
//         if(arr[i] > arr[i+1]){
//             sorted = false ;
//             break;
//         }
//     }
//     if(sorted){
//         cout << "Array is sorted." << endl;
//     }
//     else{
//         cout << "Array is not sorted." << endl;
//     }
//     return 0 ;
// }

// Reverse an array.
// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     for(int i = n-1 ; i >= 0 ; i--){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Find largest and second largest.
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int largest = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     int second_largest = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] > second_largest && arr[i] < largest){
//             second_largest = arr[i];
//         }
//     }
//     cout << "Largest: " << largest << endl;
//     cout << "Second Largest: " << second_largest << endl;
// }

// Find smallest and second smallest.
// int main () {
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int smallest = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] < smallest){
//             smallest = arr[i];
//         }
//     }
//     int second_smallest = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] < second_smallest && arr[i] > smallest){
//             second_smallest = arr[i];
//         }
//     }
//     cout << "Smallest: " << smallest << endl;
//     cout << "Second Smallest: " << second_smallest << endl;
// }

// Copy one array into another.
// int main () {
//     int n ; 
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int copy[n];
//     for(int i = 0 ; i < n ; i++){
//         copy[i] = arr[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         cout << copy[i] << " ";
//     }
//     return 0;
// }

// Count frequency of given number.
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int key ;
//     cin >> key ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == key){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// Find missing number from 1 to n.
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n-1];
//     for(int i = 0 ; i < n-1 ; i++){
//         cin >> arr[i];
//     }
//     int sum = 0 ;
//     for(int i = 0 ; i < n-1 ; i++){
//         sum = sum + arr[i];
//     }   
//     int total_sum = n * (n + 1) / 2 ;
//     int missing_number = total_sum - sum ;
//     cout << missing_number << endl;
//     return 0;
// }

// Move all zeros to end.
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] != 0){
//             arr[count] = arr[i];
//             count++;
//         }
//     }
//     while(count < n){
//         arr[count] = 0;
//         count++;
//     }
//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Left rotate by 1.
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int first = arr[0];
//     for(int i = 0 ; i < n-1 ; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = first;
//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Right rotate by 1.
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n]; 
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int last = arr[n-1];
//     for(int i = n-1 ; i > 0 ; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = last ;
//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Right rotate by 1.
// int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int sum = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 != 0){
//             sum = sum + arr[i];
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

// Left rotate by k.
// int main (){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int k ;
//     cin >> k ;
//     k = k % n ;
//     int temp[k];
//     for(int i = 0 ; i < k ; i++){
//         temp[i] = arr[i];
//     }
//     for(int i = 0 ; i < n-k ; i++){
//         arr[i] = arr[i+k];
//     }
//     for(int i = 0 ; i < k ; i++){
//         arr[n-k+i] = temp[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Right rotate by k.
// int main (){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int k ;
//     cin >> k ;
//     k = k % n ;
//     int temp[k];
//     for(int i = 0 ; i < k ; i++){
//         temp[i] = arr[n-k+i];
//     }
//     for(int i = n-1 ; i >= k ; i--){
//         arr[i] = arr[i-k];
//     }
//     for(int i = 0 ; i < k ; i++){
//         arr[i] = temp[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Remove duplicates from sorted array.
// int main () {
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int temp[n];
//     int j = 0 ;
//     for(int i = 0 ; i < n-1 ; i++){
//         if(arr[i] != arr[i+1]){
//             temp[j] = arr[i];
//             j++;
//         }
//     }
//     temp[j] = arr[n-1];
//     j++;
//     for(int i = 0 ; i < j ; i++){
//         cout << temp[i] << " ";
//     }
//     return 0;
// }

// Union of two sorted arrays.
// int main (){
//     int n1, n2 ;
//     cin >> n1 >> n2 ;
//     int arr1[n1], arr2[n2];
//     for(int i = 0 ; i < n1 ; i++){
//         cin >> arr1[i];
//     }
//     for(int i = 0 ; i < n2 ; i++){
//         cin >> arr2[i];
//     }
//     int temp[n1 + n2];
//     int i = 0 , j = 0 , k = 0 ;
//     while(i < n1 && j < n2){
//         if(arr1[i] < arr2[j]){
//             temp[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else if(arr1[i] > arr2[j]){
//             temp[k] = arr2[j];
//             j++;
//             k++;
//         }
//         else{
//             temp[k] = arr1[i];
//             i++;
//             j++;
//             k++;
//         }
//     }
//     while(i < n1){
//         temp[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while(j < n2){
//         temp[k] = arr2[j];
//         j++;
//         k++;
//     }
//     for(int i = 0 ; i < k ; i++){
//         cout << temp[i] << " ";
//     }
//     return 0;
// }

// Intersection of two arrays.
// int main (){
//     int n1, n2 ;
//     cin >> n1 >> n2 ;
//     int arr1[n1], arr2[n2];
//     for(int i = 0 ; i < n1 ; i++){
//         cin >> arr1[i];
//     }
//     for(int i = 0 ; i < n2 ; i++){
//         cin >> arr2[i];
//     }
//     int temp[min(n1, n2)];
//     int k = 0 ;
//     for(int i = 0 ; i < n1 ; i++){
//         for(int j = 0 ; j < n2 ; j++){
//             if(arr1[i] == arr2[j]){
//                 temp[k] = arr1[i];
//                 k++;
//                 break;
//             }
//         }
//     }
//     for(int i = 0 ; i < k ; i++){
//         cout << temp[i] << " ";
//     }
//     return 0;
// }

// Find all duplicate elements.
// int main (){
//     int n ; 
//     cin >> n ;
//     int arr[n]; 
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     } 
//     int temp[n];
//     int k = 0 ;
//     for(int i = 0 ; i < n-1 ; i++){
//         if(arr[i] == arr[i+1]){
//             if(k == 0 || temp[k-1] != arr[i]){
//                 temp[k] = arr[i];
//                 k++;
//             }
//         }
//     }
//     for(int i = 0 ; i < k ; i++){
//         cout << temp[i] << " ";
//     }
//     return 0;
// }

// Count distinct elements.
// int main (){
//     int n;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }   
//     int temp[n];
//     int k = 0 ;
//     for(int i = 0 ; i < n-1 ; i++){
//         if(arr[i] != arr[i+1]){
//             temp[k] = arr[i];
//             k++;
//         }
//     }
//     cout << k << endl;
//     return 0;
// }

// Check if two arrays are equal.
// int main (){
//     int n1 , n2 ;
//     cin >> n1 >> n2 ;
//     int arr1[n1], arr2[n2];
//     for(int i = 0 ; i < n1 ; i++){
//         cin >> arr1[i];
//     }
//     for(int i = 0 ; i < n2 ; i++){
//         cin >> arr2[i];
//     }
//     bool equal = true ;
//     if(n1 != n2){   
//         equal = false ;
//         }
//         else{
//             for(int i = 0 ; i < n1 ; i++){
//                 if(arr1[i] != arr2[i]){
//                     equal = false ;
//                     break;
//                 }
//             }
//         }
//     if(equal){
//         cout << "Arrays are equal." << endl;
//     }
//     else{
//         cout << "Arrays are not equal." << endl;
//     }
//     return 0;
// }

// Merge two sorted arrays.
// int main (){
//     int n1, n2 ;
//     cin >> n1 >> n2 ;
//     int arr1[n1], arr2[n2];
//     for(int i = 0 ; i < n1 ; i++){
//         cin >> arr1[i];
//     }
//     for(int i = 0 ; i < n2 ; i++){
//         cin >> arr2[i];
//     }
//     return 0;
// }

// Find first repeating element.
// int main (){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int first_repeating = -1 ;
//     for(int i = 0 ; i < n-1 ; i++){
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[i] == arr[j]){
//                 first_repeating = arr[i];
//                 break;
//             }
//         }
//         if(first_repeating != -1){
//             break;
//         }
//     }
//     cout << first_repeating << endl;
//     return 0;
// }