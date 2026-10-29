class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;
        int rev =  0 ;
        while(num>0){
            int last_digit = num % 10;
            rev=rev*10+last_digit;
            num/=10;
        }
        int rev1 =  0;
        while(rev>0){
            int last_digit1 = rev%10;
            rev1=rev1*10+last_digit1;
            rev/=10;
        }
        if(rev1==original){
            return true;
        }
        else{
            return false;
        }
    }
};