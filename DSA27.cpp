#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindrom(string str , int n){
    
            int start = 0, end = n;
            while (start<end)
            {
                if (start==end)
                {
                    start++; end--;
                    return true;
                }else{
                    return false;
                }
                
            }
            
}
bool isAlphaNumeric(string str , int n){
    int start = 0, end = n;
    if (start<='a' && start<='z')
    {
        return true;
    }else if (start<='A' && start<='Z')
    {
        return true;
    }else if (start<=0 && start<=9){
        return true;
    }else{
        return false;
    }
    
}
int main(){
// string str = "Anand Mishra";
// for (int i = 0; i < str.length(); i++)
// {
//     cout<<str[i]<<" ";
// }

// getline(cin,str);
// cout<<str;
// char arr[]="Anand";
// int start = 0,end =4;
// while(start<end){
//     swap(arr[end],arr[start]);
//     start++; end--;
// }
// for (int i = 0; i < 5; i++)
// {
//     cout<<arr[i];
// }
// string str = "Anand mishra";
// reverse(str.begin(), str.end());
// cout<<str;
string str = "anana";
int n = str.length()-1;
palindrom(str,n);
return 0;
}