// #include <iostream>
// using namespace std;
// int main(){
// int num = 2;
// char ch = 'a';
// cout<<endl;
// switch(ch){
//     case 1: cout<<"This the case 1"<<endl;
//         break;
//     case 'a': switch(num){
//         case 2: cout<< "This is known as nested switch cases"<<endl;
//     };
//         break;
//     default:cout<<"This is the default case"<<endl;
// }
// int a,b;
// cout<<"Enter the value of a :"<<endl;
// cin>>a;
// cout<<"Enter the value of b :"<<endl;
// cin>>b;
// char op;
// cout<<"Enter the operation: "<<endl;
// cin>>op;
// switch(op){
//     case '+':
//         cout<<"The sum of a and b is : "<<a+b;
//         break;
//     case '-':
//         cout<<"The difference of a and b is : "<<a-b;
//         break;
//     case '*':
//         cout<<"The product of a and b is : "<<a*b;
//         break;
//     case '/':
//         cout<<"The division of a and b is : "<<a/b;
//         break;
//     case '%':
//         cout<<"The modulo of a and b is : "<<a%b;
//         break;
//     default:
//         cout<<"Please enter the correct operation to perform";
// }
// int a, b;
// cin>>a>>b;
// int ans = 1;
// for(int i = 1; i<=b; i++){
//     ans = ans*a;
// }
// cout<<"The answere is "<<ans;

// return 0;
// }


//FUNCTIONS
#include <iostream>
using namespace std;
// int pow(int a, int b){
//     int ans = 1;
//     for(int i = 1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main (){
//     int a,b;
//     cin>>a>>b;
//     int answer = pow(a,b);
//     cout<<"The answer is: "<<answer;
// int pow(){
//     int a,b;
//     cin>>a>>b;
//     int ans = 1;
//     for(int i = 1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main(){
//     int ans = pow();
//     cout<<"The answer is : "<<ans;

// code to find the given nubmer is odd or even
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }else{
//         return 1;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter a number to find out the number is odd or even : ";
//     cin>>num;
//     if(isEven(num)){
//         cout<<"The given number is Even"<<endl;
//     }else{
//         cout<<"The given number is Odd"<<endl;
//     }
//     return 0;
// }

// Code to find the nCr
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int ans = ((factorial(n)))/((factorial(r))*(factorial(n-r)));
    return ans;
}
int main(){
    int n, r;
    cin>>n>>r;
    cout<<"The nCr of n and r is : "<<nCr(n,r)<<endl;
    return 0;
}
