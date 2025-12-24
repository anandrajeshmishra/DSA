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
int n;
cin>>n;
int sum = 0;
for(int i = 1; i<=n; i++){
    sum+=i;
}
cout<<sum;
return 0;
}