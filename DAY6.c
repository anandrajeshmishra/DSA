// 'C' programming
// #include<stdio.h>
// int main(){
//     // printf("Hello world\nHello Anand");
//     // int age = 20;
//     // printf("age is %d",age);
//     // float pi = 3.14;
//     // printf("The value of pi %f\n ",pi);
//     // char star = '*';
//     // printf("star is %c",star);
//     int age;
//     printf("Enter the age\n ");
//     scanf("%d",&age);
//     printf("your age is %d" , age);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a,b;
//     // printf("Enter the value of a and b\n");
//     // scanf("%d",&a);
//     // scanf("%d",&b);
//     // int sum = a+b;
//     // printf("The sum of a and b is: %d",sum);
//     int side;
//     printf("Enter the value of side\n");
//     scanf("%d",&side);
//     printf("The Area of square is: %d",side*side);

// }
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("Enter the value of radius :");
//     scanf("%f", &radius);
//     printf("The area of a circle is %f", 3.14*radius*radius);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     // int age;
//     // printf("Enter your age: ");
//     // scanf("%d",&age);
//     // age >=18 ? printf("Adult") : printf("Not adult");
//     char day;//m-mon,t-tue...
//      printf("Enter day: ");
//     scanf("%c",&day);
//     switch(day){
//                 case 'm': printf("monday");
//                 break;
//                 case 't': printf("tuesday");
//                 break;
//                 case 'w': printf("wednesday");
//                 break;
//                 case 'T': printf("thursday");
//                 break;
//                 case 'f': printf("friday");
//                 break;
//                 case 's': printf("saturday");
//                 break;
//                 case 'S': printf("sunday");
//                 break;
//                 default: printf("Not a valid day");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter a number\n");
//     scanf("%d", &number);
//     if(number>=0){
//         printf("The number is positive\n ");
//         if(number%2==0){
//             printf("The number is even\n");
//         }else{
//             printf("The numbers is odd");
//         }
//     }else{
//         printf("The number is negative\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter your marks (0-100)\n");
//     scanf("%d",&marks);
//     // if(marks<=30){
//     //     printf("The student is fail\n");
//     // }else if (marks>100)
//     // {
//     //     printf("Not a valid marks\n");
//     // }
//     // else{
//     //     printf("The student is pass\n");
//     // }
//     marks>30 ? printf("The student is pass\n") : printf("The student is fail\n");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter the character : \n");
//     scanf("%C", &ch);
//     if(ch>='A' && ch<='Z'){
//         printf("Entered character is in UPPERCASE\n");
//     }else if(ch>='a' && ch<='z'){
//         printf("Entered character is in lowercase\n");

//     }else{
//         printf("Not a valid alphabet\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for(int i = 1;i<=100;i++){
//         printf("Hello Anand Mishra\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     for(int i = 0;i<=10;i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for(char ch = 'a';ch<='z';ch++){
//         printf("The desired o/p is: %c \n", ch);
//     }
// }
// #include<stdio.h>
// int main(){
//     char ch = 'a';
//     while(ch<='z'){
//         printf("The desired o/p is: %c \n", ch);
//         ch++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int num ;
//     int i = 1;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     while(i<=num){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int num ;
//     int sum = 0;
//     int i = 1;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     while(i<=num){
//         sum=sum+i;
//         printf("%d\n",sum);
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//    for (int j = 1; j <=10; j++)
//    {
//      printf("%d\n",n*j);
//    }  
//  return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     do
//     {
//         printf("Enter the number\n");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if (n%2!=0)
//         {

//             break;
//         }
        
//     } while ( n%2==0);
//     printf("since entered number is odd we have exited the LOOP\n");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     do
//     {
//         printf("Enter the number\n");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if (n%7==0)
//         {

//             break;
//         }
        
//     } while ( n%7!=0);
//     printf("Multiple of 7\n");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for (int i = 5; i <=50; i++)
//     {
//         if (i%2==0)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for (int i = 5; i <=50; i++)
//     {
//         if (i%2!=0)
//         {
//           printf("%d\n",i);
//         }
        
//     }
    
// }
// #include<stdio.h>
// int main(){
//     int n;
//     int fact = 1;
//     printf("Enter the desired number\n:");
//     scanf("%d", &n);
//     for (int i = 1; i <=n; i++)
//     {
//         fact*=i;
//     }
//     printf("The fcatorial of the number is%d\n",fact);
    
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the desired number\n:");
//     scanf("%d", &n);
//     for (int i = 10; i >=1; i--)
//     {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int sum = 0;
//     for (int i =5; i <=50; i++)
//     {
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }