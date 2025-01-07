// #include <iostream>
// #include <vector>
// using namespace std;
// bool isValid(vector<int> &arr,int n , int m , int maxAllowedPages){//O(n)
//     int students = 1, pages = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>maxAllowedPages)
//         {
//             return false;
//         }if (pages + arr[i] <=maxAllowedPages)
//         {
//             pages +=arr[i];
//         }else{
//             students++;
//             pages = arr[i];
//         }
//     }
//     return students >m ? false : true; 
// }
// int allocationBooks(vector <int> &arr , int n, int m){//O(logN *n)
//     if (m>n)
//     {
//         return -1;
//     }
    
//     int sum =0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//     }
//     int ans = -1;
//     int st = 0, end = sum;//range possible answer
//     while (st<=end)//O(log N * n)
//     {
//         int mid = st + (end - st)/2;
//         if (isValid(arr,n,m,mid)){//left
//             ans = mid;
//             end = mid - 1;
//         }else//right
//         {
//             st = mid + 1;
//         }
        
//     }
    
//     return ans;
// }
// int main(){
//     vector<int>arr = {2,1,3,4};
//     int n = arr.size(), m=2;
//     cout<<allocationBooks(arr,n,m);
// return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int>arr,int n,int m,int maxAllowedTime){//O(n)
    int painter = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time+arr[i]<=maxAllowedTime)
        {
            time+=arr[i];
        }else{
            painter++;
            time = arr[i];
        }
        
    }
    return painter<=m?true : false;
}
int paintersPartion(vector<int>arr,int n,int m){//O log(sum)*n
    int sum = 0, maxVal = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxVal = max(maxVal,arr[i]);
    }
    int start = maxVal, end = sum, ans = -1;
while (start<=end)//O log(sum)*n
{
   int mid = start + (end-start);
   if (isPossible(arr,n,m,mid))//left
   {
    ans = mid;
    end = mid - 1;
   }else{//right
    start = mid + 1;
   }
   
}
return ans;
}
int main(){
vector<int>arr = {40,30,10,20};
int n = arr.size(), m = 2;
cout<<paintersPartion(arr,n,m)<<endl;
return 0;
}