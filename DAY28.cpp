// #include <iostream>
// using namespace std;
// string primeOrNOt(int N){
//     for(int n = 2; n<=N; n++){
// for (int i = 2; i*i <+N; i++)
// {
//     if (N%i==0)
//     {
//         return "non prime";
//     }
    
// }
//     }
// return "prime";

// }
// int main(){
// int N = 50;
// cout<<primeOrNOt(N)<<endl;
// return 0;
// }
// #include <iostream>
// #include <vector> 
// using namespace std;

// int main(){
//     int n = 50;
// vector <bool>isPrime(n+1,true);
// int count = 0;
// for (int i = 2; i <n; i++)
// {
//     if (isPrime[i])
//     {
//         count++;
//         for (int j = i*2; i < n;j=j+i)
//     {
//         isPrime[j] = false;
//     }
    
//     }
    
// }

// cout<<count;
// return 0;
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// void printDigits(int n){
//     int sum = 0;
//     while (n!=0)
//     {
//         int digits = n%10;
//         sum +=digits;
//         n = n/10;
//     }
//     cout<<sum<<endl;
    
// }
// int main(){
// int n = 3586;
// cout<<(int)(log10(n)+1)<<endl;
// printDigits(n);
// return 0;
// }
// #include <iostream>
// using namespace std;
// bool isArmstrong(int n){
//     int copyN = n;
//     int cubeSum = 0;
//     while (n!=0)
//     {
//         int num = n%10;
//         cubeSum+=num*num*num;
//         int next = n/10;
//     }
//     return cubeSum == copyN;
// }
// int main(){
// int n = 153;
// if (isArmstrong(n))
// {
//     cout<<"The number is armstrong number";
// }else{
//     cout<<"The number is not armstrong number";
// }

// return 0;
// }
#include <iostream>
using namespace std;
int main(){
cout<<"Hello World";
return 0;
}