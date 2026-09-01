// #include<iostream>
// using namespace std ;
// void f(int i , int n){
//     if(i > n)
//         return ; 
//         cout << "shivam"<< endl;
//         f(i+1, n);
    
// }

// int main(){
//     int n,i;
//     cin >> n;
//     f(1,n);
//     return 0;
// }  
// #include<iostream>
// using namespace std ;
// int count = 0;
// void f(int i , int n){
//     if(i > n)
//         return ; 
//         cout << " raj"<< endl;
//         f(i+1, n);
    
// }

// int main(){
//     int n,i;
//     cin >> n;
//     f(i,n);
//     return 0;

// }
// #include<iostream>
// using namespace std ;

// void digit(int n){
//     for(int i=0 ; i<n ; i++){
//         cout << i << endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     digit(n);
//     return 0;
// }

// #include<iostream>
// using namespace std ;

// void digit(int n){
//     for(int i=n; i>=1 ; i--){
//         cout << i << endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     digit(n);
//     return 0;
// }
// #include<iostream>
// using namespace std ;
// void f(int i , int n){
//     if(i > n)
//         return ; 
//         cout << i << endl;
//         f(i+1, n);
    
// }

// int main(){
//     int n,i;
//     cin >> n;
//     f(1,n);
//     return 0;
// } 
// #include<iostream>
// using namespace std ;
// void f(int i , int n){
//     if(i<1)
//         return ; 
//         cout << i << endl;
//         f(i-1, 1);
    
// }

// int main(){
//     int n,i;
//     cin >> n;
//     f(n ,1);
//     return 0;
// }
//backtracking 1 to n
// #include<iostream>
// using namespace std ;
// void f(int i ,int n){
//     if(i<1)
//         return ;
//     f(i-1 , 1);
//     cout<<i << endl;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     f(n , n);
//     return 0;
// }
// backtracing n to 1
// #include<iostream>
// using namespace std ;
// void f(int i ,int n){
//     if(i>n)
//         return ;
//     f(i+1 , n);
//     cout<<i << endl;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     f(1 , n);
//     return 0;
// }

//summation
// #include<iostream>
// using namespace std;
// void Sum(int i , int sum ){
//     if(i<1)
//     cout<<sum<<endl;
//     return;
//     Sum(i-1 , sum + i);

// }
// int main(){
//     int n;
//     cin>>n;
//     Sum(n , 0);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sum(int n ){
//     if(n==0) return 0;
//     return n + sum(n-1);

// }
// int main(){
//     int n = 5;
//     cout<<sum(n);

//     return 0;
// }
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1 ;
    return n * fact(n-1);
}
int main(){
    int n;
    cin >> n ;
    cout<<fact(n);
    return 0;
}