class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_odd = 0 ;
        int sum_even = 0; 
        for(int i=1;i<=n*(2)-1;i++){
            if(i%2==1){
                sum_odd+=i;
            }
        }
        for(int i=2;i<=n*(2);i++){
            if(i%2==0){
                sum_even+=i;
            }
        }
        int gcd_res = gcd(sum_odd,sum_even);
        return gcd_res;
    }
};