// #include<stdio.h>
// // Declaration/prototype
// void printHello();
// void bye();
// int main(){
//     printHello();//function call
//     bye();
//     printHello();
//     return 0;
// }
// // function definition
// void printHello(){
//     printf("Hello \n");
//     printf("My name is Anand Mishra\n");
// }
// void bye(){
//     printf("Good Bye\n");
// }
// #include<stdio.h>
// void Indian();
// void French();
// int main(){
//     char region;
//     printf("Enter i for indian and f for french ");
//     scanf("%c", &region);
//     if (region =='i')
//     {
//         Indian();
//     }else if (region == 'f')
//     {
//         French();
//     }else{
//         printf("Wrong Input");
//     }
//     return 0;
// }
// void Indian(){
//     printf("Namaste \n");
// }
// void French(){
//     printf("Bonjour \n");
// }
// #include<stdio.h>
// int sum(int , int);
// int main(){ 
//     int a,b;
//     printf("Enter the value of a\n");
//     scanf("%d",&a);
//     printf("Enter the value of b\n");
//     scanf("%d",&b);
//     int s = sum(a,b);
//     printf("The sum is %d",s);
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;  
// }
// #include<stdio.h>
// void Table(int);
// int main(){ 
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);
//     Table(n);
//     return 0;
// }
// void Table(int n){
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n",n*i);
//     }
// }
// #include<stdio.h>
// void calculatePrice(float value);
// int main(){
//     float value;
//     printf("Enter the price:");
//     scanf("%f",&value);
//     calculatePrice(value);
//     return 0;
// }
// void calculatePrice(float value){
//     value = value + (value*0.18);
//     printf("Final price: %f",value);
// }
// #include<stdio.h>
// #include<math.h>
// void square(n);
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     square(n);
//     return 0;
// }
// void square(n){
//     int square = pow(n,2);
//     printf("Square: %d",square);
// }
// #include<stdio.h>
// void square();
// void circle();
// void rectangle();
// int main(){
//     int side1,side2,radius,side;
//     printf("Enter the value of side1 and side2\n");
//     scanf("%d",&side1);
//     scanf("%d",&side2);
//     scanf("%d",&radius);
//     scanf("%d",&side);
//     square(side);
//     circle(radius);
//     rectangle(side1,side2);
//     return 0;
// }
// void square(int side){
//     printf("The area of square is: %d\n",side*side);
// }
// void circle(int radius){
//     printf("The area of square is: %f\n",radius*radius*3.14);
// }
// void rectangle(int side1, int side2){
//     printf("The area of square is: %d\n",side1*side2);
// }
// #include<stdio.h>
// void helloWorld(int count);
// int main(){
//     int count;
//     printf("Enter the value of count: ");
//     scanf("%d",&count);
//     helloWorld(count);
//     return 0;
// }
// void helloWorld(int count){
//     if (count ==0)
//     {
//         return;
//     }
    
//     printf("Hello World !\n");
//     helloWorld(count-1);
// }
// #include<stdio.h>
// int sum(int n);
// int main(){

//     printf("The sum is %d",sum(5));
//     return 0;
// }
// int sum(int n){
//     if (n ==1){
//         return 1;
//     }
//     int sumNm1= sum(n-1);
//     int sumN= sumNm1 + n;
//     return sumN;
// }
// #include<stdio.h>
// int fact(int n);
// int main(){

//     printf("The sum is %d",fact(5));
//     return 0;
// }
// int fact(int n){
//     if (n ==1){
//         return 1;
//     }
//     int factNm1= fact(n-1);
//     int factN= factNm1 * n;
//     return factN;
// }
// #include<stdio.h>
// int cTf(float c);
// int main(){
//     float c;
//     printf("Enter the celsius : ");
//     scanf("%f",&c);
//     printf("The conversion is%f ",cTf(c));
//     return 0;
// }
//  cTf(float c){
//     float f = ((9/5)*c)+32;
//     return f;
// }
#include<stdio.h>
int fib(int n);
int main(){
    printf("%d",fib(6));
    return 0;
}
int fib(int n)
    {if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 +fibNm2;
    // printf("The fib of %d is %d",n,fibN);
    return fibN;
}
