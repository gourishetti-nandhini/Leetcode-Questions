class Solution {
public:
    int gcd(int a,int b){
        int gcd = 1;
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
                b=b;
            }
            else{
                b=b%a;
                a=a;
            }
        }
        if(a==0){
            return b;
        }
        else{
            return a;
        }
    }
    int findGCD(vector<int>& nums) {
        int minimum_number = *min_element(nums.begin(),nums.end());
        int maximum_number = *max_element(nums.begin(),nums.end());
        int ans =gcd(minimum_number,maximum_number);
        return ans;
    }
};