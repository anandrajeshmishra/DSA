#include <iostream>
using namespace std;
//next permutation
void nextpermutation(vector <int> &nums, int m){
    int pivot = -1;
    for (int i = m-2; i>=0; i--)
    {
        if (nums[i]<nums[i+1])
        {
            pivot = i;
            break;
        }
        if (pivot==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        
    }
    for (int i = m-1; i < pivot; i--)
    {
        if (nums[i]>nums[pivot])
        {
            sort(nums[i],nums[pivot]);
        }
        
    }
    int i = pivot+1, j = m-1;
    while (i<=j)
    {
        sort(nums[i],nums[j]);
        i++;j--;
    }
    
    for (int i = 0; i < m; i++)
    {
        cout<<nums[i];
    }
    
}
int main(){
vector <int> nums = {1,2,3,5,6,4};
int m = nums.size();
nextpermutation(nums,n);
return 0;
}