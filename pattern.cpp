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
// #include<iostream>
// using namespace std;
// void print5(int n){
//     for(int i=0; i<n ; i++){
//         for(int j=0; j<n-i+1 ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }
// int main() {
//     int n;
//     cin>>n;
//     print5(n);
// return 0;
// }

// //patern7
// #include<iostream> 
// using namespace std ;
// void print7(int n){
// for(int i=0 ; i<n ;i++){
//     //space 
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//     //star
//     for(int j=0 ; j<2*i +1 ; j++){
//         cout<<"*";
//     }
//     //space 
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//    cout<< endl ;
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     print7(n);
// return 0;
// }

//pattern 8
// #include<iostream>
// using namespace std;
// void print8(int n){
//   for(int i=0;i<n ; i++){
//     for(int j=0; j<i; j++){
//         cout<<" ";
//     }
//     //star
//     for(int j=0 ; j<2*n-2*i-1 ; j++){
//         cout<<"*";
//     }
//     //space 
//     for(int j=0; j<i; j++){
//         cout<<" ";
//     }
//    cout<< endl ;
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     print8(n);
// return 0;
// }
// #include<iostream> 
// using namespace std ;
// void print7(int n){
// for(int i=0 ; i<n ;i++){
//     //space 
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//     //star
//     for(int j=0 ; j<2*i +1 ; j++){
//         cout<<"*";
//     }
//     //space 
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//    cout<< endl ;
// }
// }

//    void print8(int n){
//   for(int i=0;i<n ; i++){
//     for(int j=0; j<i; j++){
//         cout<<" ";
//     }
//     //star
//     for(int j=0 ; j<2*n-2*i-1 ; j++){
//         cout<<"*";
//     }
//     //space 
//     for(int j=0; j<i; j++){
//         cout<<" ";
//     }
//    cout<< endl ;
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     print7(n);
//     print8(n);
// return 0;
// }

// #include<iostream> 
// using namespace std;
// void print10(int n){
//     for(int i=0 ; i< 2*1 ;i++){
//         int stars ;
//         if( i>n) stars = 2* n- i;
//         for(int j=0;j<=stars;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print10(n);
// return 0;
// }

// pattern 11
// #include<iostream>
// using namespace std;
// int start =1;
// void print11(int n){
//     for(int i=0 ; i<n;i++){
//         if(start % 2 == 0) start =1;
//         else start = 0;
//         for(int j=0;j<=i;j++){
//             cout << start;
//             start = 1-start;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print11(n);
// return 0;
// }

//pattern 12
// #include<iostream>
// using namespace std;
// void print12(int n){
//     for(int i=1  
//         ; i<n ;i++){
//         //numbers
//         for(int j=1;j<=i ; j++){
//             cout<<j;
//         }
//         //space
//         for(int j=1;j<n-2*i+3;j++){
//             cout<<" ";

//         }
//         //numbers
//          for(int j=i;j>=1 ; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print12(n);
// return 0;
// }

//pattern 13
// #include<iostream>
// using namespace std;
// int num =1;
// void print13(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << num;
//             num= num+1;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print13(n);
// return 0;
// }

//pattern 14
// #include<iostream>
// using namespace std ;
// // void print14(int n){
// //     for(int i=0 ;i<n;i++){
// //         for(char ch = 'A'; ch <='A'+1;ch++){
// //         cout << ch << " ";
// //         }
// //         cout<<endl;
// // }
// // }
// void print15(int n){
//     for(int i=0 ; i<n ; i++){
//         for(char ch = 'A' ; ch <='A'+ n-i-1 ; ch++){
//             cout<< ch << " ";
//         }
//     cou        
// t << endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     // print14(n);
//     print15(n);
// return 0;
// }
// pattern 16
// #include<iostream>
// using namespace std ;
// void print16(int n){
//     for(int i =0 ; i<n ; i++){
//         char ch = 'A' + i;
//         for(int j=0; j<=i ; j++){
//             cout<< ch <<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print16(n);
// }
//pattern 17
// #include <iostream>
// using namespace std;

// void print17(int n) {
//     for(int i = 0; i < n; i++) {

//         char ch = 'A';
//         int breakpoint = (2*i + 1) / 2;

//         // Left spaces
//         for(int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }

//         // Characters
//         for(int j = 0; j < 2*i + 1; j++) {
//             cout << ch;

//             if(j < breakpoint) {
//                 ch++;
//             }
//             else {
//                 ch--;
//             }
//         }

//         // Right spaces
//         for(int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     print17(n);
// }
//patterrn 18
// #include<iostream>
// using namespace std;
// void print18(int n){
//     for(int i=0 ; i<n ; i++){
//         for(char ch='E'-i; ch <='E'; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     print18(n);
// }
//  pattern 19
// #include<iostream>
// using namespace std;
// void print19(int n){
//     int iniS = 0;
//     for(int i=0 ; i<n ; i++){
//         //stars
//         for(int j=1; j<=n-i ;j++ ){
//             cout<<"*";
//         }
//         //spaces
//         for(int j=0;j<iniS;j++){
//             cout<< " ";

//         }
//         //stars
//         for(int j=1 ; j<=n-i ;j++ ){
//             cout<<"*";
//     }
//     iniS += 2;
//     cout<<endl;
// }     
//         iniS = 8;
//         for(int i=1 ; i<=n ; i++){
//         //stars
//         for(int j=1; j<=i ;j++ ){
//             cout<<"*";
//         }
//         //spaces
//         for(int j=0;j<iniS;j++){
//             cout<< " ";

//         }
//         //stars
//         for(int j=1 ; j<=i ;j++ ){
//             cout<<"*";
//     }
//     iniS -= 2;
//     cout<<endl;
// }
// }
// int main() {
//     int n;
//     cin >> n;
//     print19(n);
// }

// //pattern 20
// #include<iostream>
// using namespace std;
// void print20(int n){
//     int spaces = 2*n-2;
//     for(int i=1; i<=2*n-1 ; i++){
//         int stars = i ;
//         if (i > n) stars = 2*n-i;
//         //stars
//         for(int j=1; j<=stars;j++){
//             cout<<"*";

//         }        
//         //spaces
//         for(int j=1 ; j<=spaces ; j++){
//             cout<<" ";
//         }

        
//         //stars
//          for(int j=1; j<=stars;j++){
//             cout<<"*";
//     }
//     cout<<endl;
//     if(n>i) spaces-=2;
//     else spaces+=2;
// }     
// }
// int main() {
//     int n;
//     cin >> n;
//     print20(n);
// }
// #include<iostream>
// using namespace std;
// void print21(int n){
//     for(int i=0 ;i<n ; i++){
//         if(i==0 || i==n-1){
//             for(int j=0 ; j<n ; j++){
//                 cout<<"*";
//             }
//         }
//         else{
//             //stars
//             for(int j=0 ; j<n ; j++){
//                if( j==0 || j == n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             }
//         }
//         cout<<endl;
        
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print21(n);
// }
// pattern 22
#include <iostream>
#include <algorithm>
using namespace std;

void print22(int n) {

    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            cout<<(n-min(min(top , bottom) , min(left , right)));


        }

        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    print22(n);
}