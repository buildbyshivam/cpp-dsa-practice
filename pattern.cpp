// pattern 1
// **
// **
// #include<iostream>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // int t;
//     // cin >> t;
//     // for (int i=0 ; i<t ;i++){
        
    
//     int n ;
//     cin >> n;
//     print1(n);
// }
// // }

// pattern 2 
// *
// **
// *** till
// #include<iostream>
// using namespace std;
// void print2(int n){
//     for(int i=0;i<n ; i++){
//         for(int j=0 ; j<=i ; j++){
//             cout << "*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t ;
//     cin>>t;
//     for(int i=0 ; i< t ; i++){
//         int n;
//         cin>>n;
//         print2(n);
//     }

// }

//pattern3 1
//         1 2
// #include<iostream>
// using namesapce std;
// void print3(int n){
//     for(int i=1 ;i<=n; i++){
//         for(int j=0 ;j<=i ,j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0 ;i<t ; i++){
//         int n;
//         cin>>n;
//         print3(n);
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void print3(int n){
//     for(int i=1 ;i<=n; i++){
//         for(int j=0 ;j<=i ;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // int t;
//     // cin>>t;
//     // for(int i=0 ;i<t ; i++){
//         int n;
//         cin>>n;
//         print3(n);
//     // }
//     return 0;
// }

// pattern 5 n-row + 1
#include<iostream>
using namespace std;
void print5(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<n-i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main() {
    int n;
    cin>>n;
    print5(n);
return 0;
}