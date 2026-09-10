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
// #include<bits/stdc++.h>
// using namespace std ;
// int remdup(vector<int>&arr , int n){
//     int i = 0;
//     for(int j=0 ; j< n ; j++){
//         if(arr[i] != arr[j]){
//             arr[i+1]=arr[j];
//             i++;

//         }   
//      }
//      return i+1;
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
//    int k = remdup(arr, n);

//    cout << "Unique elements: ";
//    for(int i = 0; i < k; i++){
//     cout << arr[i] << " ";
// }

//     return 0;
// }
//rotate abn array by one shifte to the left side
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotate_array(vector<int> &arr , int n){
//     int temp = arr[0];
//     for(int i=1; i<n ; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
//     return arr;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i =0; i<n ; i++){
//         cin >> arr[i] ;
//     }
//         rotate_array(arr,n);
//         for(int i=0;i<n;i++){
//             cout << arr[i] << endl;
//         }
    
// return 0;
// }
// //rotate from the some values
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotate_array(vector<int> &arr , int n, int d){
//     d = d % n;
//     int temp[d];
//     for(int i=d; i<d ; i++ ){
//         temp[i] = arr[i];
//     }
//     for(int i = d; i< n ; i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i = n-d ; i<n ; i++){
//         arr[i] = temp[i - (n-d)];
//     }
// }
// int main(){
//     int n,d;
//     cin >> n;
//     cout << "enter how left side rotate";
//     cin >> d;
    
//     vector<int> arr(n);
//     for(int i =0; i<n ; i++){
//         cin >> arr[i] ;
//     }
//         rotate_array(arr,n , d);
//         for(int i=0;i<n;i++){
//             cout << arr[i] << endl;
//         }
    
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// vector<int> leftrotate(vector<int> &arr , int n , int d){
//     d = d % n;
//     int temp[d];
//     for(int i=0 ; i<n ; i++){
//         temp[i] = arr[i];
//     }
//     for(int i=d; i<n ; i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i=n-d;i<n ; i++ ){
//         arr[i] = temp[i-(n-d);]
//     }
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rightrotate(vector<int> &arr , int n , int d){
//     d = d % n;
//     int temp[d];
//     //store the last d element in temp
//     for(int i=0 ; i<d ; i++){
//         temp[i] = arr[n- d + i];
//     }
//     //return the rotate elemnet at first 
//     for(int i=n-1 ; i>=d ; i--){
//         arr[i] = arr[i-d];
//     }
//     //store the remaining element 
//     for(int i= 0; i< d ; i++){
//         arr[i] = temp[i];
//     }
//     return arr;
// }

// int main(){
//     int n,d;
//     cin >> n;
//     cout << "enter how left side rotate";
//     cin >> d;
    
//     vector<int> arr(n);
//     for(int i =0; i<n ; i++){
//         cin >> arr[i] ;
//     }
//         rightrotate(arr,n , d);
//         for(int i=0;i<n;i++){
//             cout << arr[i] << endl;
//         }
    
// return 0;
// }
//for finding the sorted array
#include<bits/stdc++.h>
using namespace std ;
bool check_sorted(vector<int> &arr , int n){
    for(int i= 1; i< n ; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }

    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n ; i++){
        cin >> arr[i] ;
    }
    if(check_sorted(arr,n)){
        cout << " array is sorted";
    }
    else{
        cout << "array is not sorted";
    }
        
    
return 0;
}
