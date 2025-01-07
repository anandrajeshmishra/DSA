#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector <int> arr,int end){
int n = arr.size();
if (n == 1 )
{
    return arr[0];
}
int start = 0;
while(start<=end){
    int mid = start + (end - start)/2;
if (mid==0 && arr[0]!=arr[1])
{
    return arr[0];
}if (mid==end && 
arr[end]!=arr[end-1])
{
    return arr[end];
}if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]  )
{
    return arr[mid];
}if (mid%2==0)
{
    if (arr[mid]==arr[mid-1])
    {
        end = mid-1;
    }else{
        start = mid + 1;
    }
    
}else{
    if (arr[mid]==arr[mid-1])
    {
        start = mid + 1;
    }else{
        end = mid - 1;
    }
}
}
return -1;
}
int main(){
vector <int> arr ={1,1,2,3,3,4,4,8,8};
int end = arr.size()-1;
cout<<singleElement(arr, end);
return 0;
}