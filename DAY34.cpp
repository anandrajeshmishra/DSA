#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // if(n>0){
    //     cout<<"The value of n is POSITIVE"<<endl;
    // }else{
    //     cout<<"The value of n is NEGATIVE";
    // }
    // return 0;
    // int a,b;
    // cout<<"Enter the value of a and b";
    // cin>>a>>b;
    // if(a>b){
    //     cout<<"A is Greater than B";
    // }else{
    //     cout<<"B is Greater than A";
    // }
//     int a;
//     cout<<"Enter the value of a and b ";
//     cin>>a;
//     if(a>0){
//         cout<<"The value of a is positive"<<endl;
//     }else{
//         if(a<0){
//             cout<<"The value of a is negative"<<endl;
//         }else{
//             cout<<"The value of a is 0"<<endl;
//         }
// }
// int n;
// cout<<"Enter the value of n ";
// cin>>n;
// int i = 1;
// while(i<=n){
//     cout<<i<<"\t";
//     i++;
// }
//     return 0;
// int n;
// cout<<"Enter the value of n ";
// cin>>n;
// int i = 1;
// int sum = 0;
// while(i<=n){
//     sum = sum+i;
//     i++;
// }
// cout<<sum;
// return 0;
// 1111
// 2222
// 4444
// int n = 0;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<i;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// 1234
// 1234
// 1234
// 1234
// int n = 0;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<j;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// 4321
// 4321
// 4321
// 4321
// int n = 0;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<n-j+1;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// 123
// 456
// 789
// int n;
// cin>>n;
// int i = 1;
// int count = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<count;
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// *
// **
// ***
// ****
// int n;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// 1
// 22
// 333
// 4444
// int n;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout<<i;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// 1
// 22
// 333
// 4444
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<row;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// int n;
// cin>>n;
// int count = 1;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<count<<" ";
//         count++;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// 1
// 23
// 345
// 4567
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int value = row;
//     int col = 1;
//     while(col<=row){
//         cout<<value;
//         value++;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// 1
// 23
// 345
// 4567//without unsing the value vsariable like above
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<row+col-1;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// 1
// 21
// 321
// 4321
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<row-col+1;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// AAAA
// BBBB
// CCCC
// DDDD
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//         char ch = 'A'+row-1;
//         cout<<ch;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// ABCD
// ABCD
// ABCD
// ABCD
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//         char ch = 'A'+col-1;
//         cout<<ch;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// ABCD
// EFGH
// IJKL
// MNOP
// int n;
// cin>>n;
// char count = 'A';
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//         cout<<count;
//         count++;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// ABCD
// BCDE
// CDEF
// DEFG
// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//         char ch = 'A'+row+col-2;
//         cout<<ch;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// A
// BB
// CCC
// DDDD
int n;
cin>>n;
int row = 1;
while(row<=n){
    int col = 1;
    while(col<=row){
        char ch = 'A'+row-1;
        cout<<ch;
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}