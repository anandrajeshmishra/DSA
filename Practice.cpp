#include <iostream>
using namespace std;
int main(){
cout<<"Hello World !";
return 0;
}
#include <iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter the numbers: \n";
cin>>x;
cin>>y;
int sum = x+y;
cout<<"The sum of the given number is: "<<sum;
return 0;
}
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number: "<<endl;
cin>>n;
if (n%2==0)
{
    cout<<"The given number is even \n";
}else{
    cout<<"The given number is odd \n";
}

return 0;
}
#include <iostream>
using namespace std;
int main(){
int n;
int fact = 1;
cout<<"Enter the number to find factorial"<<endl;
cin>>n;
if (n<0)
{
    cout<<"Enter the valid number"<<endl;
}else{
for (int i = 1; i<=n; i++)
{
    fact= fact*i;
}
cout<<"The factorial of the given number is: "<<fact<<endl;
}
return 0;
}
#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the three numbers to compare: "<<endl;
cin>>a;
cin>>b;
cin>>c;
if (a>=b && a>=c)
{
    cout<<"The largest number is "<<a;
}else if (b>=a && b>=c)
{
    cout<<"The largest number is "<<b;
}else{
    cout<<"The largest number is "<<c;
}
return 0;
}
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number to find table of the number: "<<endl;
cin>>n;
for (int i = 0,j=10; i <=j; i++)
{
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}
#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the given number: "<<endl;
cin>>num;
int remainder = 0;
if (num%10!=0)
{
    remainder = num%10;
    num = num/10;
}

return 0;
}