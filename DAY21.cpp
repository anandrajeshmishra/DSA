// // binary search algorithm 
// #include <iostream>
// #include <vector>
// using namespace std;
// int binarySearch(vector <int> arr, int target){
//     int st = 0; int end = arr.size()-1;
//     while (st<=end)
//     {
//         int mid = (st  + end)/2;
//         if (target>arr[mid])
//         {
//             st = mid + 1;
//         }else if (target<arr[mid])
//         {
//             end = mid - 1; 
//         }else{
//             return mid;
//         } 
//     }
//     return -1;
// }
// int main(){
// vector <int> arr = {0,1,2,3,4,5};
// int target = 5;
// cout<<binarySearch(arr,target);
// return 0;
// }


//binarySearch using recursion 
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int> arr,int target,int st,int end){
    if (st<=end)
    {
        int mid = st + (end-st)/2;
        if (target<arr[mid])
        {
            return binarySearch(arr,target,st,mid-1);
        }else if (target>arr[mid])
        {
            return binarySearch(arr,target,mid+1,end);
        }else{
            return mid;
        }
        
    }
    return -1;
}
int main(){
vector <int> arr{0,1,2,3,4,5};
int target = 4,st = 0,end = arr.size()-1;
cout<<binarySearch(arr,target,st,end);
return 0;
} 