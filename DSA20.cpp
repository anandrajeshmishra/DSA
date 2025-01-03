// #include <iostream>
// using namespace std;
// int main(){
// int a = 5;
// int* p = &a;
// int** q = &p;
// cout<<*p<<endl;
// cout<<**q<<endl;
// cout<<p<<endl;
// cout<<*q<<endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// void changeA(int a)//pass by value
// {
//     a = 20;
// }
// int main(){
// int a = 10;
// changeA(a);
// cout<<"Inside main func "<<a<<endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// void changeA(int* ptr)//pass by reference
// {
//     *ptr = 20;
// }
// int main(){
// int a = 10;
// changeA(&a);
// cout<<"The main fuction value "<<a;
// return 0;
// }
#include <iostream>
using namespace std;
void changeA(int &ptr)//pass by reference using alias
{
    ptr = 20;
}
int main(){
int a = 10;
changeA(a);
cout<<"The main fuction value "<<a;
return 0;
}