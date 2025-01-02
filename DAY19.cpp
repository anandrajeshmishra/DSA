// #include <iostream>
// using namespace std;
// int main(){
// double ans = 1, x=3;
// int n = 3;
// long binform = n;
// if (x==0)    return 0.0;
// if(x==1)     return 1;
// if (n==0)    return 1.0;
// if (x==-1 && n%2==0)    return 1;
// if (x==-1 && n%2==1)    return -1;
// if (n<0)
// {
//     x=1/x;
//     binform = -binform;
// }
// while (binform >0)
// {
//     if (binform%2==1)
//     {
//         ans*= x;
//     }
//     x*=x;
//     binform/=2;    
// }
// cout<<ans;

// return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// vector <int> price = {7,1,5,3,6,4};
// int n = price.size();
// int maxProfit=0, bestBuy = price[0];
// for (int i = 0; i < n; i++)
// {
//     if (price[i]>bestBuy)
//     {
//        maxProfit = max(maxProfit, price[i]-bestBuy);
//     }
//      bestBuy = min(bestBuy,price[i]);
// }
// cout<<maxProfit;
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int n = -3;
long binForm = n;
double ans = 1, x = 3;
if (binForm<0)
{
    x = 1/x;
    binForm = -binForm;
    
}

while(binForm>0){
    if (binForm %2==1)
    {
        ans*=x;
    }
    x*=x;
    binForm/=2;
}
cout<<ans;
return 0;
}