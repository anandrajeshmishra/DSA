#include <iostream>
using namespace std;
int decimalToBinary( int num){
    int binary = 0;
    int remainder;
    int pow = 1;
    while (num>0)
{
    remainder = num %2;
    num = num/2;
    binary = binary + (remainder*pow);
    pow = pow*10;
}
return binary;
}
int binaryToDecimal(int num){
int decimal = 0;
int remainder;
int pow=1;
while (num>0)
{
    remainder = num%10;
    num = num/10;
    decimal = decimal + (remainder*pow);
    pow = pow*2;
    
}
    return decimal;

}
int main(){
int num;
cout<<"Enter the number to convert to decimal : ";
cout<<endl;
cin>>num;

cout<<"The converted number is "<<binaryToDecimal(num);
return 0;
}
