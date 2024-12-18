#include <iostream>

using namespace std;
int main(){
    cout << "ANAND MISHRA\nRAJESH MISHRA";
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int age = 20;
    char grade = 'A';
    double PI = 3.14;
    bool isSafe = false;
    int value = (int)PI;

    cout << value ;
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    int a=64,b=36;
    cout<<"sum = " <<a+b<<endl;
    cout<<"difference = "<< a-b<<endl;
    cout<<"product = "<< a*b<<endl;
    cout<<"division = "<< (double)a/(double)b<<endl;
    cout<<"modulo = "<< a%b<<endl;
    return 0;
    
}
#include <iostream>
using namespace std;
int main()
{
  cout<<(5!=3); //true-> 1
}
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter the value of a"<< endl;
    cin>> a;
    int b; 
    cout<< "Enter the value of b"<< endl;
    cin>> b;
    int sum = a+b;
    cout<<"Sum of a and b is :"<< sum<< endl;
    return 0;
    }

 #include <iostream>
 using namespace std;
 int main(){
    int a= 10;
    int b= --a;
    cout<<"b=" << b<< endl;
    cout<<"a="<< a << endl;
    return 0;
 }

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<< "Enter the marks :";
    cin>> marks;
    if(marks>100){
        cout<<"YOUR grade is INVALID\n";
    
    }else if (marks>=90){
        cout<<"YOUR grade is A\n";
    }
    else if (marks<90 && marks>=80)
    {
        cout<<"YOUR grade is B\n";
    
    }else {
        cout<<"YOUR garde is C\n";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    char leter;
    cout<<"ENTER the leter :";
    cin>>leter;
    int value = leter;
    if (value<=96)
    {
        cout<<"ENTERD leter is in uppercase";
    
    }else{
        cout<<"ENTERED leter is in lowercase";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"ENTER the number :";
    cin>> n;
    cout<<(n>=0?"positive":"negative");
    return 0;

}
#include <iostream>
using namespace std;
int main(){
    int count =1;
    int n;
    cout<<"Enter the value of number ";
    cin>>n;
    while(count<=n){
        cout<<count<<" ";
        count++;
    } 
    cout<<endl;
    return 0;
}
#include <iostream>
using namespace std;
 int main(){
    int n;
    
    cout<< "enter the number";
    cin>> n;
    for(int count= 1;count<=n;count=count+2){
        cout<<count<<" ";
    };
    return 0;
 }
#include <iostream>
using namespace std;
int main (){
    int n=50;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(i==5){
            break;
        }
    }
        cout<<sum;
        return 0;
}
#include <iostream>
using namespace std;
int main (){
    int i=1;
    int n=4;
    int sum=0;
    while(i<=n){
        i++;
        sum+=i;
        cout<<sum;
    }
        return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n = 50;
    int sum=0;

    for(int i=1;i<=n;i++){
    if(i%2!=0){
        sum = sum+i;
    }
    }
      cout<<sum<<" ";
    return 0;
}
#include <iostream>
using namespace std;
int main(){
  int n;
  int i=1;
  cout<<"ENTER the number";
  cin>>n;
  do{
    cout<<i<<" ";
    i++;
  }while(n>=i);
  return 0;
}
