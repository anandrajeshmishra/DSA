class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        while(x!=0){
            int num = x%10;
            if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10){
                return 0;
            }
            reverseNum = (reverseNum*10)+num;
            x/=10;
        }
        return reverseNum;
    }
};