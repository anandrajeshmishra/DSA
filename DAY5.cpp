// #include <iostream>
// using namespace std;
// class employee{
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int a1, int b1, int c1);//Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }

// };
// void employee ::  setData(int a1, int b1, int c1){
//     a =a1;
//     b =b1;
//     c =c1;
// }
// int main(){
//     employee anand;
//     anand.d = 4;
//     anand.e = 5;
//     anand.setData(1,2,3);
//     anand.getData();

// return 0;
// }
// #include <iostream>
// using namespace std;
// class employee{

// } Anand, priyanshu, navin;
// #include <iostream>
// #include <string>
// using namespace std;
// class binary{
//     private:
//     string s;
//     public:
//         void read(void);
//         void chk_bin(void);
//         void onesComplimenet(void);
//         void display(void);
// };
// void binary :: read(void){
//     cout<<"Enter binary number"<<endl;
//     cin>>s;
// }
// void binary::  chk_bin(void){
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i)!='0' && s.at(i)!='1')
//         {
//             cout<<"Incorrect binary format"<<endl;
//             exit(0);
//         }
//     }
    
// }
// void binary::onesComplimenet(void){
//     display();
//     chk_bin();
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i)=='0'){
//                 s.at(i)='1';
//         }
//                 else 

//         {
//                 s.at(i)='0';
//         }
        
//     }
//     display();
    
// }
// void binary:: display(void){
//     cout<<endl<<"Displaying your binary number"<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s.at(i);
//     }
    
// }
// int main(){
//     binary b;
//     b.read();
//     // b.chk_bin();
//     // b.display();
//     b.onesComplimenet();
//     // b.display();


// return 0;
// }
#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){ counter = 0;}
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);
};
void shop :: setPrice(void){
    cout<<"Enter Id of your item no"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID"<<itemId[i]<<endl<<"is"<<itemPrice[i]<<endl;
    }
    

} 
int main(){
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
return 0;
}