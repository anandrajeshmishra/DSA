// #include<stdio.h>
// int main(){
//     int age = 20;
//     int *ptr = &age;
//     //address
//     printf("%p\n",&age);
//     printf("%u\n",&age);
//     printf("%p\n",ptr);
//     printf("%u\n",ptr);
//     printf("%p\n", &ptr);
//     printf("%u\n", &ptr);
// }
// #include<stdio.h>
// int main(){
//     int age = 20;
//     int *ptr = &age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

// }
// #include<stdio.h>
// int main(){
//     int *ptr;
//     int x;
//     ptr = &x;;
//     *ptr = 0;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//     *ptr+=5;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//     (*ptr)++;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//     return 0;
    
// }
// #include<stdio.h>
// int main(){
//     float price =100.00;
//     float *ptr = &price;
//     int **pptr = &ptr;
//     printf("%p", *pptr);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &(ptr);
//     printf("%d", **pptr);
// }
// #include<stdio.h>
// void square(int n);
// void _square(int *n);

// int main(){
//     int n = 5;
//     square(n);
//     printf("number is = %d\n",n);
//     _square(&n);
//     printf("number is = %d\n",n);

//     return 0;
// }
// void square(int n){
//     n = n*n;
//     printf("Square = %d\n",n);
// }
// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("square = %d\n",*n);
// }
// #include<stdio.h>
// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){
//     int x = 5;
//     int y = 6;
//     _swap(&x,&y);
//     printf("The value of x and y is %d %d \n",x,y); 
//     return 0;
// }
// //call by value
// void swap(int a, int b){
//     int temp = b;
//     b = a;
//     a = temp;
//     printf("The value of a and b  is %d %d ",a,b); 
// }
// //call by reference
// void _swap(int *a, int *b){
//     int temp = *b;
//     *b = *a;
//     *a = temp;
//     printf("The value of a and b  is %d %d ",*a,*b); 
// }
// #include<stdio.h>
// void printAddress(int n);
// int main(){
//     int n = 4;
//     printAddress(n);
//     printf("address of n is : %u\n",&n);
//     return 0;
// }
// void printAddress(int n){
//     printf("address of n is : %u\n",&n);
// }
//call by reference
// #include<stdio.h>
// void printAddress(int *n);
// int main(){
//     int n = 4;
//     printAddress(&n);
//     printf("address of n is : %u\n",&n);
//     return 0;
// }
// void printAddress(int *n){
//     printf("address of n is : %u\n",n);
// }
// #include<stdio.h>
// void sum(int a, int b);
// void product(int a, int b);
// void average(int a, int b);
// int main(){
//     int a,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     sum(a,b);
//     product(a,b);
//     average(a,b);
//     return 0;
// }
// void sum(int a, int b){
//     printf("The sum is : %d\n",a+b);

// }
// void product(int a, int b){
//     printf("The product is : %d\n",a*b);
// }
// void average(int a, int b){
//     printf("The average is : %d\n",(a+b)/2);
// }
// #include<stdio.h>
// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     doWork(a,b,&sum,&prod,&avg);
//     printf("sum = %d, prod = %d, avg = %d", sum,prod,avg);
//     return 0;
// }
// void doWork(int a, int b, int *sum, int *prod, int *avg){
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }
// #include<stdio.h>
// int main(){
//     int marks[3];
//     printf("Enter the marks of phy : \n");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of chem : \n");
//     scanf("%d", &marks[1]);
//     printf("Enter the marks of math : \n");
//     scanf("%d", &marks[2]);
//     printf("phy = %d,chem = %d,math = %d",marks[0],marks[1],marks[2]);
//     return 0;
// }
//program to enter the price of 3 items and print final price with GST %18
// #include<stdio.h>
// int main(){
//     float price[3]={100,200,300};
//     printf("Enter the price of 1st item : \n");
//     scanf("%f", &price[0]);
//     printf("Enter the price of 2nd item : \n");
//     scanf("%f", &price[1]);
//     printf("Enter the price of 3rd item : \n");
//     scanf("%f", &price[2]);
//     printf("final price of 1st item = %f\nfinal price of 2nd item = %f\nfinal price of 3rd item = %f",price[0]*1.18,price[1]*1.18,price[2]*1.18);
// }
// #include<stdio.h>
// int main(){
//     int age = 20;
//     int *ptr = &age;
//     printf("The address is %u\n",ptr);
//     ptr++;
//     printf("The address is %u\n",ptr);
//     ptr--;
//     printf("The address is %u\n",ptr);
// }
// #include<stdio.h>
// int main(){
//     float price = 100.0;
//     float *ptr = &price;
//     printf("The address is %u\n",ptr);
//     ptr++;
//     printf("The address is %u\n",ptr);
//     ptr--;
//     printf("The address is %u\n",ptr);
// }
// #include<stdio.h>
// int main(){
//     char star = '*';
//     char *ptr = &star;
//     printf("The address is %u\n",ptr);
//     ptr++;
//     printf("The address is %u\n",ptr);
//     ptr--;
//     printf("The address is %u\n",ptr);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int age = 20;
//     int _age = 21;
//     int *ptr = &age;
//     int *_ptr = &_age;
//         printf("difference = %d\n",ptr);
//         printf("difference = %d\n",_ptr);


//     printf("difference = %d\n",ptr-_ptr);
//     _ptr = &age;
//     printf("comparison= %d\n",ptr==_ptr);

//     return 0;
// }