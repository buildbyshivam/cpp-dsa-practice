// #include<iostream>
// int main() {
//     std::cout<<"hey shivam"<<"\n";
//     std::cout<<"hey shivam";
//     return 0;
// #include <iostream>
// using namespace std ;
// int main(){
//     int x;
//     cin>> x;
//     cout << "value of x :"<< x;

// }

//if else statement
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin >> age ;
//     if(age>=18){
//         cout<<"you are eligible for vote";
//     }
//     else{
//         cout<<"you are not eligible";
//     }
// return 0;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int marks;
//     c
// }
//switch statement
// #include<bits/stdc++.h>
// using namespace  std;
// int main(){
//     int day;
//     cin>>day;
//     switch(day){
//         case 1:
//            cout<<"Monday";

//         case 2:
//             cout<<"Tuesday";
//         case 3:
//             cout<<"Wednesday";
//         case 4:
//              cout<<"Thursday";          
//         case 5:
//               cout<<"friday";
//         case 6:
//               cout<<"Satursday";
//         case 7:
//                cout<<"Sunday";
//                break;
//         default:
//                cout<<"invalid ";
//     }
// return 0;
// }

// ARRAY STARTED
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     cout << arr[3];
// return 0;
// }
//2d matrix 
// #include<iostream>
// using namespace std ; 
// int main()
// {
//     int arr[3][5];
//     arr[1][3] = 78;
//     cout << arr[1][3];
// return 0;
// }

// pratice 
//1 sum of two number 
// #include<iostream>
// using namespace std;
// int main(){
// int sum , a ,b;
// cin >>a >> b;
// sum = a + b ;
// cout << sum << endl;
// return 0;
// }

//2even and odd number
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin >> age;
//     if(age > 18){
//         cout<<"person is adult ";
//     }
//     else{
//         cout<<"person is minor";
//     }
// return 0;
// }

//3greatest of three number 
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , c ;
//     cin >> a >> b >> c;
//     if(a>b && a>c){
//         cout<<"a is largest among three number";

//     }
//     else if(b > a && b > c){
//         cout<<"b is greatest among three number";
//     }
//     else{
//         cout << " c is greatest among three number";
//     }
// return 0;
// }

//4 simple calculator
// #include<iostream>
// using namespace std ;
// int main(){
//     int operation , add , sub , mul , division,a,b;
    
//     cin >> a >> b;
//     cout << "choose operation from 1 add, 2 sub ,3 mul ,4 division";
//     cin >> operation;
//     switch(operation){
//         case 1:
//         cout << a+b << endl; 
//         break;

//         case 2:
//          cout << a-b << endl;
//           break;

//         case 3:
//           cout << a*b << endl;
//            break;

//         case 4:
//          cout << a/b << endl;  
//           break;
//         default:
//             cout << "invalid operation" << endl;
//              break;
//     }
// return 0 ;   
// }
//5 print 1 to n numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i=1; i < num ; i = i+1){
//         cout << i << " ";
//     }
//     return 0;
// }

//6 factorial of number 
// #include<iostream>
// using namespace std;
// int main (){
//     int n , fact = 1;
//     cin>> n;
//     for(int i = 1; i<n+1; i++ ){
//         fact = fact*i;
//         cout<<fact << " ";
//     }
//     return 0;
// }

// 7// reverse a number
// #include<iostream>
// using namespace std ;
// int main(){
//     int number,digit =0, reverse_number = 0;
//     cin>>number;
//     while(number != 0){
//        digit =  number % 10;
//        number = number / 10 ; 
//        reverse_number =  reverse_number*10 + digit ;
       


//     }
//     cout<<reverse_number;
// return 0;
// }

// //8 palindrome number
// #include<iostream>
// using namespace std;
// int main(){
//     int number , original ,temp ,reverse_number = 0 ,digit = 0;
//     cin>>number;
//     original = number;
//     while(number != 0){
//         digit = number % 10 ;
//         number = number / 10;
//         reverse_number = reverse_number*10 + digit;
//     }
//     if(reverse_number == original){
//         cout<<"this is the palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }
//     return 0;
// }
