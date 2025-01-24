#include <iostream>
using namespace std;
void printNum(int n){
    if (n==1){
        cout<<n;
        return;
    };
    cout<<n<<endl;
        printNum(n-1);
}
int factorial(int n){
    
    if (n==0)
    {
        return 1;
    } 
        return n*factorial(n-1);
}
int sumOfNum(int n){
    if (n==1)
    {
        return 1;
    }
    return n+sumOfNum(n-1);
}
int main(){
int n = 5;
// printNum(n);
// cout<<factorial(n);
cout<<sumOfNum(n);
return 0;
}