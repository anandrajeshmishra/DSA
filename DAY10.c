// // #include<stdio.h>
// // void printString(char arr[]);
// // int main(){
// //     char firstName[]= "Anand";
// //     char secondName[]= "Mishra";
// //     printString(firstName);
// //     printString(secondName);
// //     return 0;
// // }
// // void printString(char arr[]){
// //     for (int i = 0;arr[i]!='\0'; i++)
// //     {
// //         printf("%c",arr[i]);
// //     }
// //     printf("\n");
// // }
// // #include<stdio.h>
// // void printString(char arr[]);
// // int main(){
// //     char firstName[10];
// //     char secondName[10];
// //     printf("Enter your first name : ");
// //     scanf("%s",firstName);
// //     printf("Enter your second name : ");
// //     scanf("%s",secondName);
// //     printString(firstName);
// //     printString(secondName);
// //     return 0;
// // }
// // void printString(char arr[]){
// //     for (int i = 0;arr[i]!='\0'; i++)
// //     {
// //         printf("%c",arr[i]);
// //     }
// //     printf("\n");
// // }
// #include<stdio.h>
// void printString(char arr[]);
// int main(){
//     char fullName[100];
//     printf("Enter your full name : ");
//     scanf("%s",fullName);
//     printString(fullName);
//     return 0;
// }
// void printString(char arr[]){
//     for (int i = 0;arr[i]!='\0'; i++)
//     {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// #include <stdio.h>
// void printString(char arr[]);
// int main(){
//     char firstName[]="Anand";
//     char lastName[]="Mishra";
//     printString(firstName);
//     printString(lastName);
// }
// void printString(char arr[]){
//     for (int i = 0; arr[i]!=0; i++)
//     {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// #include<stdio.h>
// int main(){
//     // char firstName[50];
//     // scanf("%s",firstName);
//     char fullName[100];
//     scanf("%s",fullName);
//     printf("Your name is : %s",fullName);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char str[100];
//     gets(str);
//     puts(str);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     puts(str);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char *canChange = "Anand Mishra";
//     puts(canChange);
//     canChange = "Anandkumar";
//     puts(canChange);
//     char canNotChange[] = "Anand mishra";
//     puts(canNotChange);
//     //canNotChange = "Anandkumar";
//     puts(canNotChange);
//     return 0;
// }

// Length of the string using for loop 
// #include<stdio.h>
// int countLength(char arr[]);
// int main(){
//     char firstName[100];
//     fgets(firstName,100,stdin);
//     printf("The length of the string is : %d",countLength(firstName));
//     return 0;
// }
// int countLength(char arr[]){
//     int count = 0;
//     for (int i = 0; arr[i]!='\0' ; i++)
//     {
//         count++;
//     }
//     return count-1;
// }

// Length of the string using string.h library via writing strlen(array name)
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name [] = "Anand";
//     printf("The length of the string is : %d",strlen(name));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     // char name1 [] = "Anand";
//     // char name2 [] = "Shyam";
//     // strcpy(name2,name1);
//     // puts(name2);
//     char oldstr [] = "oldstr";
//     char newstr [] = "newstr";
//     strcpy(newstr,oldstr);
//     puts(newstr);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name1 [] = "Anand ";
//     char name2 [] = "Shyam";
//     strcat(name1,name2);
//     puts(name1);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char name1 [] = "Anand ";
    char name2 [] = "Shyam";
    printf("%d",strcmp(name1,name2));
    return 0;
}
