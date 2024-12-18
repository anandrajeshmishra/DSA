// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         if (i==8)
//         {
//             break;//uske baad aur kuch nahi print hoga
//         }
        
//         cout<<i<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         if (i==8)
//         {
//             continue;//sirf usko chodh k sab print hoga
//         }
        
//         cout<<i<<endl;
//     }
//     return 0;
// }
//POINTERS
// #include <iostream>
// using namespace std;
// int main(){
//     int a =3;
//     //&-->(Address of) operator
//     //*-->(value at) dereference operator
//     int* b = &a;
//     cout<<"The address of a is "<<b<<endl;
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The value of address b is "<<*b;
//     //pointer to pointer concept
//     int** c = &b;
//     cout<<"The address of b is"<<c;
//     cout<<"The value of address c is "<<**c;
// return 0;
// }
//ARRAY and POINTERS
// #include <iostream>
// using namespace std;
// int main(){
// int marks[] = {02,13,05,03,24};
// int i = 0;
// int* p = marks;
// for (int i = 0; i < 5; i++)

// // {
// //     cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
// // }
//   int* p = marks;
//     cout<<"The value of marks 0 is "  <<*p<<endl;
//     cout<<"The value of marks 1 is "  <<*(p+1)<<endl;
//     cout<<"The value of marks 2 is "   <<*(p+2)<<endl;
//     cout<<"The value of marks 3 is "   <<*(p+3)<<endl;
//     cout<<"The value of marks 4 is "   <<*(p+4)<<endl;

// return 0;
// }
//STRUCTURE
// #include <iostream>
// using namespace std;
// struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// };
// int main(){
//     struct employee Anand;
//     struct employee Priyanshu;
//     struct employee Himanshu;
//     Anand.eId = 1;
//     Anand.favchar = 'A';
//     Anand.salary = 120000000;
//     cout<<"The value is "<<Anand.eId<<endl;
//     cout<<"The value is "<<Anand.favchar<<endl;
//     cout<<"The value is "<<Anand.salary<<endl;

// return 0;
// }
//UNION
// #include <iostream>
// using namespace std;
// union kaam
//     {
//         int kamayega;
//         char bolega;
//         float udayega;
//     };
// int main(){
//     union kaam anand;
//     anand.bolega = 'A';
//     anand.kamayega = 120000000;
//     anand.udayega = 12000;
//     cout<<anand.udayega;
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     enum meal{ breakfast, lunch, dinner};
//     meal m1 = breakfast;
//     cout<<m1;
//     // cout<<breakfast<<endl;
//     // cout<<lunch<<endl;
//     // cout<<dinner<<endl;
// return 0;
// }



//FUNCTION
// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     int c = a +b;
//     return c;
// }
// int main(){
//     int num1,num2;
//     cout<<"Enter the value of num1"<<endl;
//     cin>>num1;
//     cout<<"Enter the value of num2"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1, num2);


// return 0;
// }


//CALL by Value & CALL by Reference
// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     int c = a +b;
//     return c;
// }
// // int swap(int a, int b)
// //Call by reference using c++ reference variables 
// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
    
// //     cout<<"The value of a is :"<<a;
// //     cout<<"The value of b is :"<<b;
// }
// void swapPointers(int* a, int* b)//Call by reference using poiters
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
    

// }
// int main(){
//     int a=64,b=36;
//     cout<<"The value of a is :"<<a<<endl;
//     cout<<"The value of b is :"<<b<<endl;
//     // swapPointers(&a,&b);
//     // cout<<"The value of a is :"<<a<<endl;
//     // cout<<"The value of b is :"<<b<<endl;
//     swapReferenceVar(a,b);
//     cout<<"The value of a is :"<<a<<endl;
//     cout<<"The value of b is :"<<b<<endl;


// return 0;
// }


//Default argument
// #include <iostream>
// using namespace std;
// float moneyReceived(int currentMoney , float factor= 1.04){
//     return currentMoney*factor;
// }
// int main(){
// int money = 100000;
// cout<<"If you have "<<money<<"Rupees in your bank account, you will receive "<<moneyReceived(money)<<"Rupees after a yeaar"<<endl;
// cout<<"If you are VIP and If you have "<<money<<"Rupees in your bank account, you will receive "<<moneyReceived(money,1.1)<<"Rupees after a yeaar";//achha yaha pe maine factor ki value provide ki hai agar nahi kiya hota toh woh by default argument uppar jo set kiya hai wahi leta

// return 0;
// }
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
// int n;
// cout<<"Enter the number:";
// cin>>n;
// factorial(n);
// return 0;
// }
// #include <iostream>
// using namespace std;
// int factorial (int n){
//     if (n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
    
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
// cout<<"The factorial of the given number is: "<<factorial(n);
// return 0;
// }
#include <iostream>
using namespace std;
int fib (int n){
    if (n<=1)
    {
        return 1;
    }
    return (n-1)+fib(n-2);
    
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
cout<<"The term in fibonacci sequence at position: "<<n<<fib(n);
return 0;
}