class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n==1){
            return arr[0];
        }
        int start = 0;
        int end = n-1;
while(start<=end){
    int mid = start + (end - start)/2;
if (mid==0 && arr[0]!=arr[1])
{
    return arr[0];
}if (mid==end && arr[end]!=arr[end-1])
{
    return arr[end];
}if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]  )
{
    return arr[mid];
}if (mid%2==0)//even
{
    if (arr[mid-1]==arr[mid])//left
    {
        end = mid-1;
    }else{//right
        start = mid + 1;
    }
    
}else{//odd
    if (arr[mid-1]==arr[mid])//right
    {
        start = mid + 1;
    }else{//left
        end = mid - 1;
    }
}
}
return -1;
    }
};