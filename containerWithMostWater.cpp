//brute force approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater =0;
        int n = height.size();
        for(int i =0; i<n;i++){
            for(int j=i+1;j<n;j++){
                int width = j-i;
                int length = min(height[i],height[j]);
                int area = width*length;
                maxWater = max(maxWater, area); 
            }
        }
        return maxWater;
    }
};
//optimal approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lP=0;
        int n =height.size();
        int rP=n-1;
        int maxWater = 0;
        while(lP<rP){
            int width = rP-lP;
            int length = min(height[lP],height[rP]);
            int area = width*length;
            maxWater = max(maxWater,area);
            height[lP]<height[rP]?lP++:rP--;
        } 
        return maxWater;
    }
};