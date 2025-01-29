#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>arr,int n){
    if (n==0 || n==1)
    {
        return true;
    }

    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}
int fib(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);   
}
int main(){
vector<int>arr = {0,1,2,3,5};
int n = 5;
cout<<isSorted(arr,n);
// cout<<fib(n);
return 0;
}