#include <iostream>
using namespace std;
int main(){
// int a = 4;
// int b = 6;
// cout<<"a&b  "<<(a&b)<<endl;
// cout<<"a|b  "<<(a|b)<<endl;
// cout<<"~a  "<<(~a)<<endl;
// cout<<"a^b  "<<(a^b)<<endl;
// cout<<(16>>2)<<endl;
// cout<<(16<<2);
// int n;
// cin>>n;
// int sum = 0;
// for(int i = 1; i<=n; i++){
//     sum+=i;
// }
// cout<<sum;
// fibonacci numbers
// int n;
// cin>>n;
// int a = 0;
// int b = 1;
// cout<<a<<" "<<b<<" ";
// for(int i = 0; i<=n; i++){
//     int nextNumber = a+b;
//     cout<<nextNumber<<" ";
//     a = b;
//     b = nextNumber;
// }
// int n;
// cout<<"Enter a number to find out that the given number is prime or not :";
// cin>>n;
// cout<<endl;
// bool isprime = 1;
// for(int i = 2; i<n; i++){
//     if(n%i==0){
//         isprime = 0;
//         break;
//     }
// }
// if(isprime==0){
//     cout<<"The given number is not a prime number"<<endl;
// }else{
//     cout<<"The given number is a prime number";
// }
// int n =4421;
// int newNum = n;
// int mul=1;
// int sum=0;
// while(newNum!=0){
//     mul*=newNum%10;
//     sum+=newNum%10;
//     newNum=newNum/10;
// }
// cout<<mul<<" "<<sum;
int x= -123;
int temp = x;
int reverse = 0;
        while(x!=0){
            int digit = (x%10);
            reverse=(reverse+digit)*10;
            x/=10;
        }
        
           cout<<reverse;
        
return 0;
}