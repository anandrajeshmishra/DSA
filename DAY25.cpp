// // duct nation flag algorithm 
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// void sort0s1s2s(vector <int> &arr, int n ){
//     int low = 0, mid = 0, high = n-1;
//     while (mid<=high)
//     {
//         if (arr[mid]==0)
//         {
//             swap(arr[low],arr[mid]);
//             low++;mid++;
//         }else if(arr[mid]==1){
//             mid++;
//         }else{
//             swap(arr[high],arr[mid]);
//             high--;
//         }
//     }
    
    
    
// }
// void print(vector <int> arr , int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// //next permutation
// void nextpermutation(vector <int> &nums, int m){
//     int pivot = -1;
//     for (int i = m-2; i>=0; i--)
//     {
//         if (nums[i]<nums[i+1])
//         {
//             pivot = i;
//             break;
//         }
//         if (pivot==-1)
//         {
//             reverse(nums.begin(),nums.end());
//         }
        
//     }
//     for (int i = m-1; i < pivot; i--)
//     {
//         if (nums[i]>nums[pivot])
//         {
//             sort(nums[i],nums[pivot]);
//         }
        
//     }
//     int i = pivot+1, j = m-1;
//     while (i<=j)
//     {
//         sort(nums[i],nums[j]);
//         i++;j--;
//     }
    
//     for (int i = 0; i < m; i++)
//     {
//         cout<<nums[i];
//     }
    
// }

// int main(){
// vector <int> arr = {2,0,2,1,1,0,1,2,0,0};
// vector <int> nums = {1,2,3,5,6,4};
// int m = nums.size();
// int n = arr.size();
// // sort0s1s2s(arr, n);
// // print(arr,n);
// nextpermutation(nums,n);
// return 0;
// }
