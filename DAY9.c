// #include<stdio.h>
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index : ", i);
//         scanf("%d",(ptr+i));
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = %d\n",i,*(ptr+i));
//     }
//     return 0;
    
// }
// #include<stdio.h>
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index : ", i);
//         scanf("%d",&aadhar[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = %d\n",i,aadhar[i]);
//     }
//     return 0;
    
// }
// #include<stdio.h>
// void printNumbers(int arr[],int n);
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);
// }
// void printNumbers(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
    
// }
// #include<stdio.h>
// void printNumbers(int *arr,int n);
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);
// }
// void printNumbers(int *arr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }
// #include<stdio.h>
// int main(){
//     int marks[2][3];
//      marks[0][0] = 90;
//      marks[0][1] = 91;
//      marks[0][2] = 92;
//      marks[1][0] = 93;
//      marks[1][1] = 94;
//      marks[1][2] = 95;
    
//     printf("%d",marks[0][0]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
//     int count = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (numbers[i]%2!=0)
//         {
//             count+=1;
//         }
//     }
//     printf("%d",count);
// }
// #include<stdio.h>
// int countOdd(int numbers[],int n);
// int main(){
//     int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d", countOdd(numbers,10));  
// }
// int countOdd(int numbers[],int n ){
//         int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (numbers[i]%2!=0)
//         {
//             count++;
//         }
//     }
//     return count;
// }
//Reverse
// #include <stdio.h>
// void reverse(int numbers[], int n);
// void printArray(int numbers[], int n);
// int main(){
//     int numbers[]={1,2,3,4,5,6,7,8,9,10};
//     int n = 10;
//     reverse(numbers,n);
//     printArray(numbers,n);
//     return 0;
// }
// void printArray(int numbers[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",numbers[i]);
//     }
// }
// void reverse(int number[], int n){
//     for (int i = 0; i < n/2; i++)
//     {
//         int firstValue = number[i];
//         int secoundValue = number[n-i-1];
//         number[i] = secoundValue;
//         number[n-i-1] = firstValue;
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number(n>2): ");
//     scanf("%d ", &n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i-1] + fib[i-2];//important
//         printf("%d\t" , fib[i]);
//     }
//     printf("\n");
//     return 0;
// }
#include<stdio.h>
void storeTable(int arr[][10],int n, int m,int number);
int main(){
int tables[2][10];
    storeTable(tables,0,10,2);
    storeTable(tables,1,10,3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",tables[0][i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",tables[1][i]);
    }
return 0;
}
void storeTable(int arr[][10],int n, int m,int number){
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number*(i+1);
    }
    
}