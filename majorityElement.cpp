//brute force approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums){
            int freq = 0;
                for(int ele : nums){
                    if(ele == val){
                        freq ++;
                    }
                }
                if(freq > n/2)
                {
                    return val;
                }
        }
        return -1;
    }
};
//sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //sort
        sort(nums.begin(),nums.end());
        //frequency coount
        int freq = 1, ans = nums[0];
        for(int i =1; i<n; i++){
                if(nums[i]==nums[i-1]){
                freq++;
                }
                else{
                    freq =1;
                    ans = nums[i];
                }if (freq>n/2){
                    return ans;
                }
                
        } 
        return -1;
    }
};
//moore's voting algorithms
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int freq = 0, ans = 0;
       for(int i = 0;i<nums.size();i++ ){
        if(freq==0){
            ans = nums[i];
        }if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
       }
    return ans;
    }
};