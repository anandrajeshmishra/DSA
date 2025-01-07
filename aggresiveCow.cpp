#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int c , int n , int maxAllowedDistance){
    int cows = 1,lastStall = arr[0];
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]-lastStall)>=maxAllowedDistance)
        { 
            cows++;
            lastStall=arr[i];
        }if (cows==c)
        {
            return true;
        }
        
    }
    return false; 
}
int aggresiveCows(vector<int> &arr ,int c ,int n){
    sort(arr.begin(), arr.end());
int start = 1, end = arr[n-1]-arr[0], ans = -1;
while (start<=end)
{
    int mid = start + (end-start)/2;
    if (isPossible(arr,c,n,mid))
    {
        ans = mid;
        start = mid+1;
    }else{
        end = mid - 1;
    }
    
}
return ans;
}
int main(){
vector <int> arr = {1,2,8,4,9};
int n = arr.size();
int c = 3;
cout<<aggresiveCows(arr,c,n);
return 0;
}