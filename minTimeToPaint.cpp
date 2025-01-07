#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector <int> arr,int m,int n,int maxAllowedTime){
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time+arr[i]<=maxAllowedTime)
        {
            time+=arr[i];
        }else{
            painter++;
            time = arr[i];
        }
        return painter<=m?true:false;
    }
    
}
int minTimeToPaint(vector<int>arr, int m, int n){
    int maxend = INT16_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxend = max(maxend,arr[i]);
    }
    
    int start = maxend, end = sum, ans =-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if (isPossible(arr,m,n,mid))
        {   ans = mid;
            end = mid-1;
        }else{
            start = mid + 1;
        }
        
    }
    return ans;
}
int main(){
vector <int>arr={40,30,10,20};
int n = arr.size();
int m = 2;
cout<<minTimeToPaint(arr, m ,n);
return 0;
}