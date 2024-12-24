// #include <iostream>
// using namespace std;
// int main(){
// int num[5];
// int size = 5;
// for (int i = 0; i < size; i++)
// {
//     cin>>num[i];
// }

// int smallest = INT8_MAX;
// int largest = INT8_MIN;
// for (int i = 0; i < size; i++)
// {
//     if (num[i] < smallest)
//     {
//         smallest = num[i];
//     }
//     smallest = min(num[i], smallest);
//     largest = max(num[i], largest);    
// }
// cout<<"smallest = "<<smallest<<endl;
// cout<<"largest = "<<largest<<endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// void change (int arr[],int size){
//     cout<<"IN function";
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2*arr[i];
//     }
    
// }
// int main(){
//     int arr[] = {1,2,3};
//     int size = 3;
//     change(arr,size);
//     cout<<"IN main";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int linearSearch(int arr[],int size){
//     int target;
// cout<<"enter the value to search :"<<endl;
// cin>>target;
// for (int i = 0; i < size; i++)
// {
//     if (arr[i] == target)
//     {
//         return i;
//     }
// }
// return -1;
// }
// int main(){
// int arr[] = {1,2,3,4,5,6,7};
// int size = 7;
// cout<<linearSearch(arr,size);
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5,6,7};
int size = 7;
for (int start = 0, end = size -1; start < size, end > 0; start++,end --)
{
    swap(arr[start],arr[end]);
}
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" "<<endl;
}

return 0;
}