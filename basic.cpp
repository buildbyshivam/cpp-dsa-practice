//count the number
// #include<iostream>
// using namespace std;
// int main(){
// int count = 0;
// int n;
// cin >> n;
// while(n>0){
//     int lastdigit = n % 10;
//     count = count + 1;
//     n = n/10;

// }

// cout << count ; 
// return 0;
// }

// //reverse the number
// #include<iostream>
// using namespace std;
// int main(){
    
//     int reverse_number = 0;
//     int n;
//     cin>>n;
//     while(n > 0){
//         int lastdigit = n%10;
//         n = n/ 10;
//         reverse_number = (reverse_number *10 ) + lastdigit;
        
//     }
//     cout << reverse_number;
//     return 0;
// }

// //palindrome number
// #include<iostream>
// using namespace std;
// int main(){
//     int reverse_number = 0;
//     int n;
//     cin>>n;
//     int dup = n;
//     while(n>0){
//         int lastdigit = n% 10;
//         n = n/10;
//         reverse_number = (reverse_number*10 ) + lastdigit;
//     }
//     if( reverse_number == dup){
//         cout<<"the number is palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }
//     return 0;
// }

// //armstrong number
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int sum = 0;
//     int count = 0;
//     int n;

//     cin >> n;

//     int dup = n;
//     int temp = n;

//     // Count total digits
//     while (temp > 0) {
//         count++;
//         temp = temp / 10;
//     }

//     // Calculate Armstrong sum
//     while (n > 0) {
//         int last_digit = n % 10;

//         sum = sum + pow(last_digit, count);

//         n = n / 10;
//     }

//     if (sum == dup) {
//         cout << "The number is Armstrong";
//     }
//     else {
//         cout << "Not Armstrong";
//     }

//     return 0;
// }

// // number of divisors 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;
// void divisors(int n){
//     vector<int> ls;
//   for(int i=1 ; i*i <= n; i++){
//     if(n % i == 0){
//         ls.push_back(i);
    
//     if((n / i)  != i ){
//         ls.push_back(n/i);
//     }
//   }
// }
// sort(ls.begin(),ls.end());
// for(auto it : ls) cout << it << " ";
// }
// int main(){
//     int n;
//     cin >> n;
//     divisors(n);
//     return 0;

// }
// check for the prime
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void check_prime(int n){
// int count = 0;
//  for(int i=1 ; i*i <= n; i++){
//     if(n % i == 0){
//         count++;
    
//     if((n / i)  != i ){
//         count++;
//     }

//   }
// }
//   if(count == 2){
//     cout<<"number is prime";
//   }
//   else{
//     cout<<"not prime";
// }
// }
// int main(){
//     int n;
//     cin >> n;
//     check_prime(n);
//     return 0;
// }

//highest common factor
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void gcd(int n, int n1){
//   int ans = 1;
//   for(int i=1; i<=min(n,n1) ; i++){
//     if(n % i == 0 && n1 % i == 0){
//      ans =  i ;

//     }
    
//   }
//   cout << ans;
// }
// int main(){
//     int n , n1;
//     cin >> n;
//     cin >> n1;
//     gcd(n , n1);
//     return 0;
// }

// greatest common divisor

#include <iostream>
using namespace std;

void hcd(int n, int n1) {

    while (n > 0 && n1 > 0) {

        if (n > n1) {
            n = n % n1;
        }
        else {
            n1 = n1 % n;
        }
    }

    if (n == 0) {
        cout << n1;
    }
    else {
        cout << n;
    }
}

int main() {

    int n, n1;

    cin >> n >> n1;

    hcd(n, n1);

    return 0;
}