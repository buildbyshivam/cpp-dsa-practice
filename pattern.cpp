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
#include<iostream>
using namespace std ;
void print14(int n){
    for(int i=0 ;i<n;i++){
        for(char ch = 'A'; ch <='A'+1;ch++){
        cout << ch << " ";
        }
        cout<<endl;
}
}
int main(){
    int n;
    cin>>n;
    print14(n);
return 0;
}