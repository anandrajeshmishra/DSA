#include <iostream>
using namespace std;
int main(){
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
int a,b;
cout<<"Enter the value of a :"<<endl;
cin>>a;
cout<<"Enter the value of b :"<<endl;
cin>>b;
char op;
cout<<"Enter the operation: "<<endl;
cin>>op;
switch(op){
    case '+':
        cout<<"The sum of a and b is : "<<a+b;
        break;
    case '-':
        cout<<"The difference of a and b is : "<<a-b;
        break;
    case '*':
        cout<<"The product of a and b is : "<<a*b;
        break;
    case '/':
        cout<<"The division of a and b is : "<<a/b;
        break;
    case '%':
        cout<<"The modulo of a and b is : "<<a%b;
        break;
    default:
        cout<<"Please enter the correct operation to perform";
}
return 0;
}