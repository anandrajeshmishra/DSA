class Solution {
public:
    int reverse(int x) {
        int ulta = 0;
        while(x!=0){
            int digit = (x%10);
            if(ulta > INT_MAX/10 ||(ulta == INT_MAX && digit > 7))
            return 0;
            if(ulta< INT_MIN/10 || (ulta == INT_MIN && digit < -8))
            return 0;
            ulta = (ulta*10)+digit;
            x/=10;
        }
        
        return ulta;
    }
};