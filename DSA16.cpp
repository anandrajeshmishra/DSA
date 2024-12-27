#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec;
// vector<int> vec(10,1);
// SIZE
// cout<<"size = "<<vec.size()<<endl;
// PUSH BACK
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
vec.push_back(65);
cout<<"size = "<<vec.size()<<endl;
// for (int i: vec)
// {
//     cout<< i<<endl;
// }
cout<<"capacity: "<<vec.capacity()<<endl;

return 0;
}