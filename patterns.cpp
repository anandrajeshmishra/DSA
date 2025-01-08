#include <iostream>
using namespace std;
int main(){
// int n = 3;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// for (int i = 0; i < n; i++)
// {
//     char ch = 'A';
//     for (int j = 0; j < n; j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }
// int num = 1;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
    
// }
// char ch = 'A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
    
// }
// int n = 4;
// char ch = '*';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <i+1; j++)
//     {
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }
// * 
// * *
// * * *
// * * * *
// int n = 4;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<i+1<<" ";
        
//     }
//     cout<<endl;
// }
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// int n = 4;
// char ch = 'A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j<i+1; j++)
//     {
//         cout<<ch<<" ";
//     }
//     ch++;
//     cout<<endl;
// }
// A 
// B B
// C C C
// D D D D
// int n = 4;
// for (int i = 0; i < n; i++)
// { 
//       for (int j = 1; j <= i+1; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// int n = 4;
// for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j >0; j--)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
    
// }
// 1
// 21  
// 321 
// 4321
// int n = 4;
// int num = 1;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 1; j <=i+1; j++)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
    
// }
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// int n = 4;
// char ch = 'A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <i+1; j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }
// A 
// B C
// D E F
// G H I J
// int n = 4;

// for (int i = 0; i < n; i++)
// {
//     for (char ch = i+1; ch >'A'; ch--)
//     {
//         cout<<ch;
//     }
//     cout<<endl;
// }
// int n = 4;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j<i; j++)
//     {
//         cout<<" ";

//     }
//         for (int k = 0; k <n-i; k++)
//         {
//             cout<<(i+1);
//         }
//         cout<<endl;
// }
int n = 4;
char ch = 'A';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <i; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < n-i; j++)
    {
        cout<<ch;
       
    }
    ch++;
    cout<<endl;
    
}


return 0;
}