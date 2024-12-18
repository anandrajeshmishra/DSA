#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i =2; n-1>=i; i++ ){
        if (n%i==0)
        {
            cout<<"The entered number is non prime nuber"<<endl;

        }else{
            cout<<"The entered number is prime"<<endl;
        }
        

    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number: ";
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        if (n%i==0)
        {
            isPrime= false;
            break;
        }
    
        
    }
    if (isPrime == true){
        cout<<"The entered number is prime"<<endl;
    
    }else{
        cout<<"The enterd number is non prime"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,m ;
    cout<<"enter the number";
    cin>>n;
    cout<<"Enter the number";
    cin>>m;
    for(int i =1;i<=m;i++){
    for(int j =1; j<=n;j++){
        cout<<"*";
    
    }
    cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    int factorial =1;
    cout << "Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial= factorial*i;
       

    }
     cout<<"The numberof the factorial is:"<<factorial<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        char ch = 'A';
        for(int j = 0;j<=n-1;j++){
            cout<<ch;
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
} 
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"after pattern :"<<num<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int i=0;i<n;i++){
       for (int j=0; j<i+1;j++) {
        cout<<"* ";

       }
       cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for(int i = 0; i<n;i++){
        
        for(int j = 1;j<i+1;j++){
            cout<<j;
          
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n;i++){
        for (int j = i+1; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    for(int i =0; i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
         for (int j = 0; j < n-i; j++)
           {
            cout<<(i+1);
           }
         cout<<endl;  
        }
       return 0; 
        
    }
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n-i-1 ; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        
        }
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        cout<<endl;
      
    }
    return 0;
    
}
#include <iostream>
using namespace std;
int main(){
    int n=4;
    //TOP outter LOOP
    for(int i=0;i<n;i++){
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<< "*";
        if(i!=0){
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<" ";
        }
        cout<< "*";
        
        }
        cout<<endl;
        
    }
    //BOTTOM outer LOOP
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j<i+1 ; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if (i!=n-2)
        {
            for (int j = 0; j < 2*(n-i)-5; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n =4;
    //TOP outer LOOP
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <i+1; j++)
      {
        cout<<"*";
      }
      if (i!=3)
      {
         for (int j= 0; j < (2*(n-1)-1); j++)
      {
        cout<<" ";
      }
      }
       for (int j = i+1; j > 0; j--)
      {
        cout<<"*";
      }
      
      cout<<endl;
    }
    
}