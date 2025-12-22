#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // if(n>0){
    //     cout<<"The value of n is POSITIVE"<<endl;
    // }else{
    //     cout<<"The value of n is NEGATIVE";
    // }
    // return 0;
    // int a,b;
    // cout<<"Enter the value of a and b";
    // cin>>a>>b;
    // if(a>b){
    //     cout<<"A is Greater than B";
    // }else{
    //     cout<<"B is Greater than A";
    // }
    int a;
    cout<<"Enter the value of a and b ";
    cin>>a;
    if(a>0){
        cout<<"The value of a is positive"<<endl;
    }else{
        if(a<0){
            cout<<"The value of a is negative"<<endl;
        }else{
            cout<<"The value of a is 0"<<endl;
        }
}
    return 0;
}