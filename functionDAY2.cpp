#include <iostream>
using namespace std;
int printHello(){
cout<<"Hello Anandkumar Mishra\n";
return 3;
}
int main(){
int val = printHello();
cout<<"val ="<<val;
return 0;
}
#include <iostream>
using namespace std;
int sum(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    cout<<sum(10,5);
    return 0;
}
#include <iostream>
using namespace std;
int minOfTwo(int a,int b){
if(a>b){
    return b;
}else{
    return a;
}

}
int main(){
    cout<<"min = "<<minOfTwo(10,5);
return 0;
}
#include <iostream>
using namespace std;
int sumOfNumbers(int n,int sum =0){
    for (int i = 1; i<=n ; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    cout<<"sumOfNumbers :"<<sumOfNumbers(5);
    return 0;
}
#include <iostream>
using namespace std;
int factorialOfNumber(int n){
     int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
 int main(){
    cout<<"The factorial of number is :"<<factorialOfNumber(2);
 return 0;
}
#include <iostream>
using namespace std;
int sum(int a, int b){
    a = a+10;
    b = b+10;
    return a+b;
}
int main(){
    int a=5,b=4;
    cout<<sum(a,b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

}
#include <iostream>
using namespace std;
int changeX(int x){
    x=2*x;
    cout<<"x= "<<x;
    cout<<endl;
}
int main(){
    int x= 5;
    changeX(x);
    cout<<"x= "<<x;

}
#include <iostream>
using namespace std;
int sumOfDigits(int n){
    int digitSum= 0;
    while(n>0){int 
        lastdigit = n%10;
        n=n/10;
        digitSum+=lastdigit;
    }
    cout<<"digitsum= "<<digitSum;
    cout<<endl;
    return digitSum;
}
int main(){
    int n= 145;
    sumOfDigits(n);
    

}
#include <iostream>
using namespace std;
int binomial(int n, int r){
    int fact= 1;
    int fact1= 1;
    int fact2= 1;
    for ( int i = 1; i <=n; i++)
    {
        fact *=i;
    }
    for ( int i = 1; i <=r; i++)
    {
        fact1 *=i;
    }
    for ( int i = 1; i <=(n-r); i++)
    {
        fact2 *=i;
    }

    int nCr=fact/((fact1)*(fact2));
    cout<<" nCr= "<<nCr;
    cout<<endl;
    return nCr;
}
int main(){
    int n= 8,r=2;
    binomial(n,r);
    

}
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

return fact_n/(fact_r*fact_nmr); 
}
int main(){
    int n =8, r=2;
    cout<<nCr(n,r)<<endl;
    return 0;

}
#include<iostream>
using namespace std;
int primeOrNot(int n){
    bool isPrime=true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        
        {
           isPrime= false;
           break;
        }
    }
            if (isPrime==true)
            {
               cout<<"PRIME NUMBER";
            }
            
        else{
            cout<<"NOT A PRIME NUMBER";
        }
        cout<<endl;
    
    return isPrime ;
}
int main(){
int n =3;

cout<<primeOrNot(n);
    return 0;

}
#include <iostream>
using namespace std;
int printPrime(int n){
 for (int i = 2; i <=n; i++)
 {
    if (n%i!=0)
    {
       cout<<i; 
    }
    cout<<endl;
 }
 
}
int main(){
    int n = 20;
    printPrime(n);
    return 0;
}