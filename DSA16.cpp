// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// vector<int> vec;
// // vector<int> vec(10,1);
// // SIZE
// // cout<<"size = "<<vec.size()<<endl;
// // PUSH BACK
// vec.push_back(25);
// vec.push_back(35);
// vec.push_back(45);
// vec.push_back(55);
// vec.push_back(65);
// cout<<"size = "<<vec.size()<<endl;
// // for (int i: vec)
// // {
// //     cout<< i<<endl;
// // }
// cout<<"capacity: "<<vec.capacity()<<endl;

// return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int linearSearch(vector<int>& vec){
//     int target;
//     cout<<"enter the number to search"<<endl;
//     cin>>target;
//     for (size_t i = 0; i < vec.size(); i++)
//     {
//         if (vec[i]==target)
//         {
//             return i;
//         }
        
//     }
//     return -1;
    
// }
// int main(){
// vector<int>vec={1,2,3,4,5};
// cout<<linearSearch(vec);
// return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int reverse(vector<int>& vec,int size){
//     for (int start = 0, end = size-1 ; start<size, end > 0; start++,end--)
//     {
//         swap(vec[start],vec[end]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<vec[i];
//     }   
// }
// int main(){
// std :: vector<int>vec = {1,2,3,4,5};
// int size = 5;
// cout<<reverse(vec);
// return 0;
// }
// maximum subarray  
// #include <iostream>
// using namespace std;
// int main(){
// int arr[5]= {1,2,3,4,5};
// int n = 5;
// for (int start = 0; start < n; start++)
// {
//     for (int end= start; end < n; end++)
//     {
//         for (int i = start; i<=end; i++)
//         {
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
    
// }

// return 0;
// }

// maximum subarray sum

#include <iostream>
using namespace std;
int main(){
int arr[5]= {1,2,3,4,5};
int n = 5;
int maxSum = INT8_MIN;
for (int start = 0; start < n; start++)
{   int currSum = 0;
    for (int end= start; end < n; end++)
    {
        currSum+=arr[end];
        maxSum = max(currSum,maxSum);
    }
}
    cout<<"max sumarry sum = "<<maxSum<<endl;
return 0;
}