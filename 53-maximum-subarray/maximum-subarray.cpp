class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum_sum=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maximum_sum){
                maximum_sum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maximum_sum;
    }
};