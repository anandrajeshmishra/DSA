int n;
cin>>n;
int temp = n;
int binary = 0;
while(temp!=0){
    int digit = temp%2;
    binary = (binary+digit)*10;
    temp/=2;
}
cout<<binary;