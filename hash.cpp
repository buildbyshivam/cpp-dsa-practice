//hashing for the number 
// #include<iostream>
// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cin >> n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin >> arr[i];
//     }
//     // pre computate
//     int hash[13] = {0};
//     for(int i=0; i<n ; i++){
//         hash[arr[i]] += 1;
//     }
//     int q;
//     cin >> q;
//     int number ;
//     while(q--){
//     cin >> number;
//     cout << hash[number] << endl;
// }
// return 0;
// }

//hashing for the string
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     string s ; 
//     cin >> s;
//     //comutate pre
//     int hash[256] = {0};
//     for(int i=0 ;i< s.size(); i++ )
//     hash[s[i]- 'a']++;
//     //fch query
//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << hash[c - 'a'] << endl ;

//     }
//     return 0;
// }

//hashing using the map function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>> arr[i];
    }
    map<int,int>mpp;
    for(int i=0 ; i<n ; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << "->"<<it.second << endl;
    }

    int q;
    cin>> q;
    int number;
    while(q--){
        
        cin >> number;
        cout<< mpp [number]<<endl;

    }

return 0;
}