#include<stdio.h>
int main(){
    char str[100];
    char ch;
    int i = 0;

    while (ch!= '\n'){
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    puts(str);
}
#include<stdio.h>
void salting (char password[]);
int main(){
    char password[100];
    scanf("%s", password);
    salting(password);

}
void salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);

}
#include <stdio.h>
void slice(char str[], int n , int m);
int main(){
    char str[]= "Helloworld";
    slice(str,3,6);
}
void slice(char str[], int n , int m){//n and m are valid values
    char newStr[100];
    int j = 0;
    for(int i=n;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]= '\0';
    puts(newStr);
}
#include<stdio.h>
int countOfVowels(char str[]);
int main(){
    char str[]="helloworld";
    printf("vowels are: %d",countOfVowels(str));
}
int countOfVowels(char str[]){
    int count = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == 'a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u')
        {
            count++;
        }
        
    }
    return count;
}
#include<stdio.h>
void checkChar(char str[],char ch);
int main(){
    char str[]="hellowwwwwwwwworld";
    char ch='x';
    checkChar(str,ch);
}
void checkChar(char str[],char ch){
    int count = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
        
    }
    printf("Character is not present");
    return ;
}
#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll = 34;
    s1.cgpa = 7.17;
    strcpy(s1.name,"Anand");
    printf("student name = %s\n",s1.name);
    printf("student roll no. = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
}
#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll = 34;
    s1.cgpa = 7.17;
    strcpy(s1.name,"Anand");
    printf("student name = %s\n",s1.name);
    printf("student roll no. = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    struct student s2;
    s2.roll = 35;
    s2.cgpa = 7.5;
    strcpy(s2.name,"sujal");
    printf("student name = %s\n",s2.name);
    printf("student roll no. = %d\n",s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);
    struct student s3;
    s3.roll = 36;
    s3.cgpa = 8.00;
    strcpy(s3.name,"chirag");
    printf("student name = %s\n",s3.name);
    printf("student roll no. = %d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);
    struct student s4;
    s4.roll= 37;
    s4.cgpa= 8.5;
    strcpy(s4.name,"slesha");
    printf("Student name = %s\n",s4.name);
    printf("student roll no. = %d\n",s4.roll);
    printf("student cgpa = %f\n",s4.cgpa);
}
#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);
int main(){
    // struct student ECE[100];
    // ECE[0].roll = 34;
    // ECE[0].cgpa = 7.17;
    // strcpy(ECE[0].name,"ANAND");
    struct student s1 = {"Anand",34,7.17};
    printInfo(s1);
    // printf("The name of the student is %s\n",ECE[0].name);
    // printf("The roll no. of student is %d\n",ECE[0].roll);
    // printf("The cgpa of student is %f\n", ECE[0].cgpa);
    // printf("The name of the student is %s\n",s1.name);
    // printf("The roll no. of student is %d\n",s1.roll);
    // printf("The cgpa of student is %f\n",s1.cgpa);
    // struct student *ptr = &s1;
    // printf("The roll no. %d\n",(*ptr).roll);
    // printf("The roll no. %d\n",ptr->roll);
    // printf("name is %s\n",ptr->name);
    // printf("CGPA is %f\n",ptr->cgpa);
    return 0;
}
void printInfo(struct student s1){
    struct student *ptr = &s1;
    printf("The roll no. %d\n",ptr->roll);
    printf("name is %s\n",ptr->name);
    printf("CGPA is %f\n",ptr->cgpa);
}
#include <stdio.h>
#include <string.h>
struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100]; 
};
void printAddress( struct address add);
int main(){
    struct address adds[5];
    printf("Enter the information of the person 1 : ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    printf("Enter the information of the person 2 : ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);
    printf("Enter the information of the person 3 : ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);
    printf("Enter the information of the person 4 : ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);
    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);

    return 0;
}
void printAddress(struct address add){
    printf("address is : %d,%d,%s,%s",add.houseNo,add.block,add.city,add.state);
}
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calSum(struct vector v1,struct vector v2,struct vector sum);
int main(){
    struct vector v1 = {10,8};
    struct vector v2 = {7,5};
    struct vector sum = {0};
    calSum(v1,v2,sum);
    return 0;

}
void calSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is : %d\n",sum.x);
    printf("sum of y is : %d\n",sum.y);
}
#include<stdio.h>
struct complex {
    int real;
    int img;
};
int main(){
    struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("real part = %d\n", ptr->real);
    printf("img part = %d", ptr->img);
    return 0;
}
#include<stdio.h>
typedef struct bankAccount {
    char name[100];
    int aacountNumber;
}acc;
int main(){
    acc acc1 = {"Anand",200};
    acc acc2 = {"Priyanshu",201};
    acc acc3 = {"Naveen",202};
    printf("Account Number is %d Name of account holder %s\n",acc1.aacountNumber,acc1.name);
    printf("Account Number is %d Name of account holder %s\n",acc2.aacountNumber,acc2.name);
    printf("Account Number is %d Name of account holder %s\n",acc3.aacountNumber,acc3.name);
    return 0;
}