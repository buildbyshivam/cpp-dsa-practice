// //selection sort
// #include<iostream>
// using namespace std;
// void selection_sort(int arr[],int n){
//     int temp;
//     for(int i=0 ; i<n-1 ; i++){
//         int mini = i;
//         for(int j=i+1 ; j<n ; j++){
//             if(arr[j]<arr[mini])
//             mini = j;
//         }
//         temp = arr[i];
//         arr[i]= arr[mini];
//         arr[mini] = temp;
//     }

// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n ; i++){
//         cin >> arr[i];
//     }
//     selection_sort(arr,n);
//     for(int i=0 ; i<n ; i++){
//     cout << arr[i]<< " ";
//     }
// return 0;
// }

//bubble sort
// #include<iostream>
// using namespace std;
// void bubble_sort(int arr[], int n){
//     for(int i=0 ; i<n-i ; i++){
//         for(int j=0 ; j<n-i-1 ; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp ;
//                 temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n ; i++){
//         cin >> arr[i];
//     }
//     bubble_sort(arr,n);
//     for(int i=0 ; i<n ; i++){
//     cout << arr[i]<< " ";
//     }
// return 0;
// }
//insertion sort
// #include<iostream>
// using namespace std;
// void insertion_sort(int arr[],int n){
//     for(int i=0 ; i<n; i++){
//         int j = i;
//         while(j > 0 && arr[j-1]>arr[j]){
//             int temp;
//             temp = arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j]=temp;
//             j--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n ; i++){
//         cin >> arr[i];
//     }
//     insertion_sort(arr,n);
//     for(int i=0 ; i<n ; i++){
//     cout << arr[i]<< " ";
//     }
// return 0;
// }

//merge sort
// #include <bits/stdc++.h>
// using namespace std;

// void merge(int arr[], int low, int mid, int high) {

//     int left = low;
//     int right = mid + 1;
//     int z = 0;

//     int temp[high - low + 1];

//     // Compare both halves
//     while (left <= mid && right <= high) {

//         if (arr[left] <= arr[right]) {
//             temp[z] = arr[left];
//             left++;
//             z++;
//         }
//         else {
//             temp[z] = arr[right];
//             right++;
//             z++;
//         }
//     }

//     // Remaining elements from left half
//     while (left <= mid) {
//         temp[z] = arr[left];
//         left++;
//         z++;
//     }

//     // Remaining elements from right half
//     while (right <= high) {
//         temp[z] = arr[right];
//         right++;
//         z++;
//     }

//     // Copy temp back into arr
//     z = 0;

//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[z];
//         z++;
//     }
// }


// void divide(int arr[], int low, int high) {

//     if (low >= high) {
//         return;
//     }

//     int mid = (low + high) / 2;

//     divide(arr, low, mid);
//     divide(arr, mid + 1, high);

//     merge(arr, low, mid, high);
// }


// void merge_sort(int arr[], int n) {
//     divide(arr, 0, n - 1);
// }


// int main() {

//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     merge_sort(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//with using the vector function
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int high , int low , int mid){
    int left = low;
    int right = mid +1 ;
    vector<int> temp;
    while(left<=mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
        temp.push_back(arr[right]);
        right++;
        }
    }
    while(left <= mid){
    temp.push_back(arr[left]);
    left ++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


void divide(int arr[], int high , int low){
    if(low >= high){
        return;
    }
    int mid = (high +low)/2;
    divide(arr , low , mid);
    divide(arr , mid+1 ,high);
    merge(arr, low , mid ,high);

    
}
void merge_sort(int arr[],int n){
    divide(arr , 0 ,n-1)
}
int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}