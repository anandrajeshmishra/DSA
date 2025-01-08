#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}
void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int smallestIndex = i;
        for (int j = i+1; j <n; j++)
        {
            if (arr[j]<arr[smallestIndex])
            {
                swap(arr[j],arr[smallestIndex]);
                
            }
            
            
        }
        
    }
    
}
void printArry(int arr[], int n){
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}
cout<<endl;
}
int main(){
int arr [] = {4,1,5,2,3};
int n = 5;
bubbleSort(arr,n);
printArry(arr,n);
selectionSort(arr,n);
printArry(arr,n);
return 0;
}