//brute force approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                if(i!=j){
                    ans[i]*=nums[j];
                }
            }
        }
        return ans;
    }
};
//Optimal approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector <int> ans(n,1);
    //prefix
    for(int i = 1; i<n;i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    //suffix
    for(int i = n-2; i>=0;i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    //ans
    for(int i = 0; i<n; i++){
         ans[i] = prefix[i] * suffix[i];
    }
    return ans;
    }
};
//with improve space complexties
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector <int> ans(n,1);
    int suffix =1;
    //prefix
    for(int i = 1; i<n;i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    //suffix
    for(int i = n-2; i>=0;i--){
        suffix*=nums[i+1];//ith suffix
        ans[i]*= suffix;
    }
    return ans;
    }
};