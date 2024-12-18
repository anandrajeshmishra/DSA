//swap numbers with temporary vairables
// #include <stdio.h>
// int main(){
//     int a, b;
//     printf("Enter the value of a and b : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("The value of a is %d and the value of b is %d before swapping\n",a,b);
    // int temp = b;
    // b = a;
    // a = temp;
//     printf("The value of a is %d and the value of b is %d after swapping\n",a,b);
//     return 0;
// } 
//swap numbers without temporary vairables
// #include <stdio.h>
// int main(){
//     int a, b;
//     printf("Enter the value of a and b : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("The value of a is %d and the value of b is %d before swapping\n",a,b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("The value of a is %d and the value of b is %d after swapping\n",a,b);
//     return 0;
// }
//swap numbers using function using call by reference
// #include<stdio.h>
// void swap(int *a, int *b);
// int main(){
//     int a, b;
//     printf("Enter the value of a and b : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("The value of a is %d and the value of b is %d before swapping\n",a,b);
//     swap(&a,&b);
//     return 0;
// }
// void swap(int *a, int *b){
//     int *temp = b;
//     b = *a;
//     a = *temp;
//     printf("The value of a is %d and the value of b is %d after swapping\n",a,b);
// }
//swapping using pointer
// #include<stdio.h>
// int main(){
//         int a, b;
//     printf("Enter the value of a and b : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("The value of a is %d and the value of b is %d before swapping\n",a,b);
//     int *ptr = &a;
//     a = b;
//     b = *ptr;
//     printf("The value of a is %d and the value of b is %d after swapping\n",a,b);
//     return 0;
// }
//Reverse the number of digits
// #include<stdio.h>
// void Reverse(int numbers[],int n);
// void printReverse(int numbers[],int n);
// int main(){
//     int numbers[] = {1,2,3,4,5};
//     Reverse(numbers,5);
//     printReverse(numbers,5);

//     return 0;
// }
// void Reverse(int numbers[],int n){

//     for (int i = 0; i < n/2; i++)
//     {
//         int firstDigit = numbers[i];
//         int secondDigit = numbers[n-1-i];
//         numbers[i]= secondDigit;
//         numbers[n-1-i]= firstDigit;
//     }   
// }
// void printReverse(int numbers[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",numbers[i]);
//     }   
// }
//Reverse the number of digits using modulo of 10
// #include<stdio.h>
// int main(){
//     int number;
//     int remainder;
//     int reverseNumber = 0;
    // printf("Enter the number : ");
    // scanf("%d",&number);
//     printf("The given number is %d: \n",number);
    // while (number!=0)
    // {
    //     remainder= number%10;
    //     reverseNumber= reverseNumber*10+remainder;
    //     number= number/10;
    // }
//     printf("The reverse number is :%d",reverseNumber);
    
//     return 0;
// }
//Decimal to Binary not getting desired output
// #include<stdio.h>
// void decimalToBinary(int number);
// int main(){
//     int number;
//     printf("Enter the number : ");
//     scanf("%d",&number);
//     printf("In Decimal: %d\n",number);
//     decimalToBinary(number);
//     return 0;
// }
// void decimalToBinary(int number){
//     int binary = 0;
//     int remainder;
//        while (number!=0)
//     {
//         remainder= number%2;
//         binary= binary*10+remainder;
//         number= number/2;
//     }
//     printf("In binary :%d",binary);
// }
//Don't know how to do it
// #include<stdio.h>
// void resistorValue(char colour[],int n);
// int main(){
//     char colour[]={'b','r','o','y','g','B','v','G','w'};
//     int colour[0]=1;
//     int colour[1]=2;
//     int colour[2]=3;
//     int colour[3]=4;
//     int colour[4]=5;//green
//     int colour[5]=6;//blue
//     int colour[6]=7;
//     int colour[7]=8;//grey
//     int colour[8]=9;

//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%f",colour[i]);
//     }
    
//     return 0;
// }
//kaprekar number or not
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;
//     int square= pow(number,2);
//     int kaprekar = square;
//     int remainder;
//     printf("Enter the number : ");
//     scanf("%d",&number);
//     while (square!=0)
//     {
//         remainder =square%10;
//         square/=10;
//     }
//      if (kaprekar==remainder+square)
//         {
//             printf("kaprekar");
//         }else{
//             printf("Non-kaprekar");
//         }
// }