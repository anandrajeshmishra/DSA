#include <iostream>
#include <vector>
using namespace std;
// int binarySearch(int arr, int st, int end, int target){
// int mid = st + (end - st)/2;
// if (st<=end)
// {
//     if (arr[mid]==target)
// {
//     return mid;
// }else if (target<arr[mid])
// {
//     return binarySearch(arr,st,mid-1,target);
// }else{
//     return binarySearch(arr,mid+1,end,target);
// }

// return -1;
// }
// }
void printSubset(vector<int>arr,vector<int> &ans, int i){
    if (i==arr.size())
    {
        for (int val : ans)
        {
            cout<<val<<" ";
        }cout<<endl;
        return;
        
    }
    //include
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);
    ans.pop_back();
    //exclude
    printSubset(arr,ans,i+1);
}
int main(){
vector<int> arr = {1,2,3};
vector<int> ans;//store the subset
printSubset(arr,ans,0);
// int arr[] = {1,2,3,4,5,6};
// int st = 0, end = 5, target = 3;
// cout<<binarySearch(arr,st,end,target);
return 0;
}