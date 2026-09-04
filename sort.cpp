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
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0 ; i<n; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            int temp;
            temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0 ; i<n ; i++){
    cout << arr[i]<< " ";
    }
return 0;
}