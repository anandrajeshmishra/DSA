// #include <iostream>
// using namespace std;
// int main(){
// int arr[7]= {3,-4,5,4,-1,7,-8};
// int size = 7;
// int currSum=0;
// int maxSum = INT8_MIN;
// for (int i = 0; i <size; i++)
// {
//     currSum+=arr[i];
//     maxSum = (currSum,maxSum);
//     if (currSum <0)
//     {
//         currSum = 0;
//     }
    
// }
// cout<<"the maximum subarray sum: "<<maxSum<<endl;
// return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int target){
// int n = nums.size();
// vector<int> ans;

// for (int i = 0; i < 4; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         if (nums[i]+nums[j]== target)
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
        
//     }
    
// }
// }
// int main(){
// vector<int> nums = {2,7,11,15};
// int target = 26;
// vector<int> ans = pairSum(nums, target);
// cout<<ans[0]<<","<<ans[1]<<endl;
// return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
vector<int> ans;
int n = nums.size();
int i =0;
int j = n-1;
while (i<j)
{
    int pairSum = nums[i]+nums[j];
    if (pairSum > target)
    {
        j--;
    }else if (pairSum < target)
    {
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}

}
int main(){
vector<int> nums = {2,7,11,15};
int target = 26;
vector<int> ans = pairSum(nums, target);
cout<<ans[0]<<","<<ans[1]<<endl;
return 0;
}