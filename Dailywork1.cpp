////Pointer 
// //question 1
// #include <iostream>
// using namespace std;
// int main(){
//     int a =3;
//     int* b =&a;
//     cout<<b<<endl;
//     cout<<*b;
// return 0;
// }
// //question 2
// #include <iostream>
// using namespace std;
// int main(){
// int Rollno[] = {34,35,36,38};
// int* p = Rollno;
// for (int i = 0; i < 5; i++)
// int* p = Rollno;
//     cout<<"The value of Rollno 0 is "  <<*p<<endl;
//     cout<<"The value of Rollno 1 is "  <<*(p+1)<<endl;
//     cout<<"The value of Rollno 2 is "   <<*(p+2)<<endl;
//     cout<<"The value of Rollno 3 is "   <<*(p+3)<<endl;

// return 0;
// }
// //question 3
// #include <iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter the value of a and b"<<endl;
//     cin>>num1;
//     cin>>num2;
//     cout<<"Before swapping"<<num1<<" "<<num2<<endl;
//     int* a = &num1;
//     int* b = &num2;
//     int temp = *a;
//     *a = *b;
//     *b = temp ;
//      cout<<"After swapping"<<num1<<" "<<num2;

// return 0;
// }

////ARRAY and POINTER
// //QUESTION 1 WIll be same as that of pointer 
// //Question 2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the cout of numbers "<<endl;
//     cin>>n;
//     int order[n];
//     cout<<"ENTER"<<n<<"NUMBERS"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>> order[i];
//     }int* p = order;
//     int largest = *p;
//     for (int i = 1; i < n; i++)
//     {
//         p++;
//         if (*p >largest )
//         {
//             largest = *p;
//         }
        
//     }
//     cout<<"The largest number is"<<largest;

// return 0;
// }
////Question 3
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the count of numbers "<<endl;
//     cin>>n;
//     int order[n];
//     cout<<"ENTER"<<n<<"NUMBERS"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>> order[i];
//     }int* p1 = order;
//      int* p2 = order + n-1;
//     while (p1<p2){
//         int temp = *p1;
//         *p1 = *p2;
//         *p2 = temp;
//         p1++;
//         p2--;
//     }
    
//     cout<<"Reversed array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<order[i]<<" "<<endl;
//     }
// return 0;
// }
////STRUTURE
//// QUESTION 1
// #include <iostream>
// #include <string>
// using namespace std;
// typedef struct student
// {
//     string name;
//     int age;
//     int marks;
// };
// int main(){
// struct student s1;
//         s1.name = "Anand";
//         s1.age = 20;
//         s1.marks = 24;
//         cout<<"The name of s1 "<<s1.name<<endl;
//         cout<<"The age of s1 "<<s1.age<<endl;
//         cout<<"The marks of s1 "<<s1.marks<<endl;

// return 0;
// }

//// QUESTION 2
// #include <iostream>
// #include <string>
// using namespace std;
// struct student
// {
//     string name;
//     int age;
//     int marks;
    
// };
// void information(const student& s1){

//         cout<<"The name of s1 "<<s1.name<<endl;
//         cout<<"The age of s1 "<<s1.age<<endl;
//         cout<<"The marks of s1 "<<s1.marks<<endl;
// }
// int main(){
// struct student s1;
//         s1.name = "Anand";
//         s1.age = 20;
//         s1.marks = 24;
//         information(s1);

// return 0;
// }
// //QUESTION 3




////Function 
////Function prototyping
////Question 1
// #include <iostream>
// using namespace std;
// void calculatingSquare(int n);
// int main(){
//     int n;
//     cout<<"Enter the number to be squared ";
//     cin>>n;
//     calculatingSquare(n);

// return 0;
// }
// void calculatingSquare(int n){
//     int square = n*n;
//     cout<<"The square is "<<square;
    
// }
////Question 2
// #include <iostream>
// using namespace std;
// void primeOrNot(int n);

// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     primeOrNot(n);
//     return 0;
// }
//     void primeOrNot(int n){
//     for (int i = 2; i < n; i++){
//     if (n%i==0)
//     {
//         cout<<"Entered number is not a prime number";
    
//     }else{
//         cout<<"Entered number is a prime number";
//     }
//     }
// }
////QUESTION 3
// #include <iostream>
// using namespace std;
// int factorial(int n);
// int main(){
//     int n ;
//     cout<<"Enter the number to get factorial"<<endl;
//     cin>>n;
//     factorial(n);
// return 0;
// }
// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <= n; i++)
//     {
//        fact*=i;
//     }
//     cout<<"The factorial of the number"<<fact;
// }


////call by value
////QUESTION 1
// #include <iostream>
// using namespace std;
// void add(int a,int b){
//     int sum = a+b;
//     cout<<"The sum of the number is "<<sum;
// }
// int main(){
// int a,b;
// cout<<"Enter the numbers "<<endl;
// cin>>a;
// cin>>b;
// add(a,b);
// return 0;
// }

////QUESTION 2
// #include <iostream>
// using namespace std;
// void changes(int b){
//     cout<<b;
// }
// int main(){
//     int a;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     changes(a);

// return 0;
// }
////QUESTION 3
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <= n; i++)
//     {
//        fact*=i;
//     }
//     cout<<"The factorial of the number "<<fact;
// }
// int main(){
//     int n ;
//     cout<<"Enter the number to get factorial"<<endl;
//     cin>>n;
//     factorial(n);
// return 0;
// }
//// Default Argument
////QUESTION 1
// #include <iostream>
// using namespace std;
// void volumeOfCuboid(int length, int breath, int height = 1){
//     int volume = length*breath*height;
//     cout<<"The volume of a cubiod "<<volume;
// }
// int main(){
//     int length, breath;
//     cout<<"Enter the value of length and breath"<<endl;
//     cin>>length;
//     cin>>breath;
//     volumeOfCuboid(length,breath);

// return 0;
// }
////QUESTION 2
////Nahi samjh raha

////QUESTION 3
// #include <iostream>
// using namespace std;
// void costAfterTax(int amount, float tax = 1.18)
// {
//     float afterTax = amount*tax;
//     cout<<afterTax;
// }
// int main(){
//     int amount;
//     cout<<"Enter the amount"<<endl;
//     cin>>amount;
//     costAfterTax(amount);

// return 0;
// }