//brute force approach of maximmum sub array
// #include <iostream>
// using namespace std;
// int main(){
// int arr[]={1,2,3,4,5};
// int n =5;
// for (int st = 0; st < n; st++)
// {
//     for (int end = st; end < n; end++)
//     {
//         for (int i = st; i <=end; i++)
//         {
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
// }

// return 0;
// }


//logic smajhne k liye likha tha samajh gaya
// #include <iostream>
// using namespace std;
// int main(){
// int n = 5;
// for (int i = 0; i < n; i++)
// {
//     cout<<i;
// }
// cout<<endl;
// cout<<"achha toh ham chalte hain";
// return 0;
// }


//brute force approach of maximmum sub array sum
// #include <iostream>
// using namespace std;
// int main(){
// int arr[] = {3,-4,5,4,-1,7,-8};
// int n = 7;
// int maxSum = INT16_MIN;
// for (int st = 0; st < n; st++)
// {
//     int currSum=0;
//     for (int end = st; end < n; end++)
//     {
//         currSum+=arr[end];
//         maxSum = max(maxSum,currSum);
//     }
    
// }
// cout<<"The maximmum sub array sum : "<<maxSum;
// return 0;
// }


//kadanes algorithm approach of maximmum sub array sum
#include <iostream>
using namespace std;
int main(){
int arr[] = {3,-4,5,4,-1,7,-8};
int n = 7;
int currSum = 0;
int maxSum = INT16_MIN;
for (int i = 0; i < n; i++)
{
    currSum+=arr[i];
    maxSum = max(currSum,maxSum);
    if (currSum<0)
    {
        currSum = 0;
    }
    
}
cout<<"maximum sub array sum : "<<maxSum;

return 0;
}