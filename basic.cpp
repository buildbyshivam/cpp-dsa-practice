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
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void check_prime(int n){
int count = 0;
 for(int i=1 ; i*i <= n; i++){
    if(n % i == 0){
        count++;
    
    if((n / i)  != i ){
        count++;
    }

  }
}
  if(count == 2){
    cout<<"number is prime";
  }
  else{
    cout<<"not prime";
}
}
int main(){
    int n;
    cin >> n;
    check_prime(n);
    return 0;
}