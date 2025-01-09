// duct nation flag algorithm 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sort0s1s2s(vector <int> &arr, int n ){
    int low = 0, mid = 0, high = n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    
    
    
}
void print(vector <int> arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
vector <int> arr = {2,0,2,1,1,0,1,2,0,0};
int n = arr.size();
sort0s1s2s(arr, n);
return 0;
}