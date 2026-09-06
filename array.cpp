// //array first lecture
// //to find the largest number
// #include<bits/stdc++.h>
// using namespace std;
// int largest_element(vector<int> &arr , int n){
//     int largest = arr[0];
//     for(int i=0 ; i<n ; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main(){
//     int n ;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n ; i++){
//         cin >> arr[i];
//     }
    
//     int largest = largest_element(arr , n);
    
//     cout << largest << " ";
    
// return 0;
// }

// to find the second largest number
// #include<bits/stdc++.h>
// using namespace std;
// int slargest_element(vector<int> &arr , int n){
//     int largest = arr[0];
//     int slargest = -1;
//     for(int i=0 ; i< n ; i++){
//         if(arr[i] > largest){
//             slargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] < largest && arr[i] > slargest){
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }
// int main(){
//     int n ;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n ; i++){
//         cin >> arr[i];
//     }
    
//     int slargest = slargest_element(arr , n);
    
//     cout << slargest << " ";
    
// return 0;
// }
// for find the second smallest 
// #include<bits/stdc++.h>
// using namespace std;

// int ssmallest_element(vector<int> &arr, int n){
//     int smallest = arr[0];
//     int ssmallest = INT_MAX;

//     for(int i = 0; i < n; i++){
//         if(arr[i] < smallest){
//             ssmallest = smallest;
//             smallest = arr[i];
//         }
//         else if(arr[i] > smallest && arr[i] < ssmallest){
//             ssmallest = arr[i];
//         }
//     }

//     return ssmallest;
// }

// int main(){
//     int n;

//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int ssmallest = ssmallest_element(arr, n);

//     cout << "Second smallest: " << ssmallest << endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std ;
int remdup(vector<int>&arr , int n){
    int i = 0;
    for(int j=0 ; j< n ; j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;

        }   
     }
     return i+1;
}
int main(){
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   int k = remdup(arr, n);

   cout << "Unique elements: ";
   for(int i = 0; i < k; i++){
    cout << arr[i] << " ";
}

    return 0;
}