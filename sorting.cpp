#include <iostream>
using namespace std;
int main(){
int arr[]= {4,1,5,2,3};
int n = 5;
for (int i = 0; i < n; i++)
{
    for (int j = 0; i <n-i-1; i++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}


return 0;
}