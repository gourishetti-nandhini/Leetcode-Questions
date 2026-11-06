class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int orginal = n;
        while(n>0){
            int last_digit = n%10;
            sum+=last_digit;
            product*=last_digit;
            n/=10;
        }
        return product-sum;
    }
};