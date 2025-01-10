#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;
int main(){
// vector <int> vec2={1,2,3,4,5,6};
// vector <int> vec(10,-1);//dynamic array
// vector <int> vec1(vec);
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// vec.push_back(5);
// cout<<vec.at(3);
// cout<<vec.front();
// cout<<vec.back();
// for (int val: vec)
// {
//     cout<<val<<" ";
// }
// vec2.erase(vec2.begin()+1,vec2.begin()+3);
// vec2.insert(vec2.begin()+2,100);
// vec2.clear();
// cout<<vec2.size();
// cout<<vec2.capacity();
// for (int val: vec2)
// {
//     cout<<val<<" ";
// }
// cout<<"begin"<<*(vec2.begin())<<endl;
// cout<<"end"<<*(vec2.end());
// cout<<vec.size();
// cout<<vec.capacity();
// vector <int>::iterator itr;
// for (itr = vec2.begin(); itr != vec2.end(); itr++)
// {
//     cout<<*(itr)<<endl;
// }
// vector <int> :: reverse_iterator itr;
// for (itr = vec2.rbegin(); itr!= vec2.rend(); itr++)
// {
//     cout<<*(itr)<<endl;
// }
// list <int> l;
// l.push_back(1);
// l.push_back(2);
// l.push_front(3);
// l.push_front(4);
// l.pop_back();
// l.pop_front();
// deque<int> d = {1,2,3,4,5};
// list <int> l = {1,2,3,4,5};
// vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}};
// vec.emplace_back(5,6);
// for (pair<int,int>p :vec )
// {
//     cout<<p.first<<" "<<p.second<<endl;
// }
// cout<<d[2];
// cout<<l[2]; // I cannot do this
// stack <int> s;
// s.push(1);
// s.push(2);
// s.push(3);
// stack<int>s2;
// s2.swap(s);
// cout<<s.size()<<endl;
// cout<<s2.size()<<endl;
// // cout<<"top "<<s.top()<<endl;
// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }
// cout<<endl;
// cout<<s.empty();
queue <int> q;
q.push(1);
q.push(2);
q.push(3);
while (!q.empty())
{
    cout<<q.front();
    q.pop();
}
cout<<endl;
return 0;
}