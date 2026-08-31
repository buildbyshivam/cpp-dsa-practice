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
#include<iostream>
using namespace std ;
void f(int i ,int n){
    if(i>n)
        return ;
    f(i+1 , n);
    cout<<i << endl;
    
}
int main(){
    int n;
    cin>>n;
    f(1 , n);
    return 0;
}