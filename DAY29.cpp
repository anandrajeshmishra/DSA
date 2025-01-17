// #include <iostream>
// using namespace std;
// int gcd(int a, int b){
//     while(a>0 && b>0){
//         if (a>b)
//     {
//         a = a%b;
//     }else{
//         b = b%a;
//     }
//     } 
//     if (a==0) return b;
//     return a;       
// }
// bool isArmstrong(int n){
//     int copyN = n;
//     int cubeOfNum = 0;
//     while(n!=0){
//         int Num = n%10;
//         cubeOfNum += (Num*Num*Num);
//         n = n/10;
//     }
//     return cubeOfNum==copyN;
// }
// int gcdRec(int a , int b){
//     if(b==0) return a;
//     return gcdRec(b,a%b);
// }
// int lcm(int a , int b){
//     int gcd = gcdRec(a,b);
//     return (a*b)/gcd;
// }
// int reverseNum(int number){
//     int reverse = 0;
//     while(number!= 0){
//         int num = number%10;
//         reverse = (reverse*10)+num;
//         number/=10;  
//     }
//     return reverse;
// }
// int main(){
// int a = 28, b = 20;
// int n = 153;
// int number = 4537;
// cout<<reverseNum(number)<<endl;
// cout<<lcm(a,b)<<endl;
// cout<<gcd(a,b)<<endl;
// if (isArmstrong(n))
// {
//     cout<<"the number is an armstrong number";
// }else{
//     cout<<"the number is not an armstrong number";
// }
// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int maximumRowSum(int matrix[4][3], int rows, int colums){
    int largest = INT16_MIN;
    for (int i = 0; i < rows; i++)
    {   
        int rowsum =0;
        for (int j = 0; j < colums; j++)
        {  
            rowsum += matrix[i][j];            
        }
        largest = max(largest,rowsum);
        
    }
    return largest;
    
}
int diagonalSum(int matrix[3][3], int rows, int colums){
    int sum = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         if (i==j)
    //         {
    //             sum+=matrix[i][j];
    //         }else if(j == rows-i-1){
    //                 sum+=matrix[i][j];
    //         }
            
    //     }
        
    // }
    for (int i = 0; i < rows; i++)
    {
        sum+=matrix[i][i];
        if (i!=rows-i-1)
        {
            sum+=matrix[i][rows-i-1];
        }
        
    }
    
    return sum;
}
bool linearSearch(int matrix[4][3], int rows, int colums, int key){
    for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < colums; j++)
    {
        if (matrix[i][j] == key)
        {
            return true;
        }
        
    }
}
return false;
}
int main(){
int matrix [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int rows = 3;
int colums = 3;
int key = 8;
cout<<diagonalSum(matrix,rows,colums);
// cout<<maximumRowSum(matrix, rows,colums);
// cout<<linearSearch(matrix,rows,colums,key);
// // cout<<matrix[2][1]<<endl;
// //input
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j < colums; j++)
//     {
//         cin>>matrix[i][j];
//     }
// }
// //output
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j < colums; j++)
//     {
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
return 0;
}