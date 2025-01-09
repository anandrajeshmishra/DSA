//bubble sort
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n){
//     for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <n-i-1; j++)
//     {
//         if (arr[j]>arr[j+1])
//         {
//             swap(arr[j],arr[j+1]);
//         }
        
//     }
    
// }
// }
// void printArray(int arr[],int n){
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// }
// int main(){
// int arr[]={4,1,5,2,3};
// int n = 5;
// printArray(arr,n);
// bubbleSort(arr,n);
// printArray(arr,n);
// return 0;
// }


//bubble sort with optiimzation 
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n){
//     for (int i = 0; i < n; i++){
//         bool isSwap = false;
//     for (int j = 0; j <n-i-1; j++)
//     {
//         if (arr[j]>arr[j+1])
//         {
//             swap(arr[j],arr[j+1]);
//             isSwap = true;
//         }
        
//     }
//     if (!isSwap)
//     {
//         return ;
//     }
    
// }
// }
// void printArray(int arr[],int n){
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// }
// int main(){
// int arr[]={4,1,5,2,3};
// int n = 5;
// printArray(arr,n);
// bubbleSort(arr,n);
// printArray(arr,n);
// return 0;
// }
// #include <iostream>
// using namespace std;
// void selectionSort(int arr[], int n){
//     for (int i = 0; i < n-1; i++){
//         int smallestIdx = i;
//     for (int j = i+1; j <n; j++)
//     {
//         if (arr[j]<arr[smallestIdx])
//         {
//             swap(arr[j],arr[smallestIdx]);
//         }
        
// }
// }
// }
// void printArray(int arr[],int n){
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// }
// int main(){
// int arr[]={4,1,5,2,3};
// int n = 5;
// printArray(arr,n);
// selectionSort(arr,n);
// printArray(arr,n);
// return 0;
// }

//insertion sort 
// #include <iostream>
// using namespace std;
// void insertionSort(int arr[], int n){
//     for (int i = 1; i < n; i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while (prev>=0 && arr[prev]>curr)
//         {
//             arr[prev+1] = arr[prev];
//             prev--;

//         }
//         arr[prev + 1] = curr;
        
// }
// }
// void printArray(int arr[],int n){
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// }
// int main(){
// int arr[]={4,1,5,2,3};
// int n = 5;
// printArray(arr,n);
// insertionSort(arr,n);
// printArray(arr,n);
// return 0;
// }
#include <iostream>
using namespace std;
int main(){

return 0;
}