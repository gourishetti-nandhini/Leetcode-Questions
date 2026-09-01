class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // int maximum_sum=INT_MIN;
        // int n=nums.size();
        // for(int x=0;x<n;x++){
        //     int i=x;
        //     int sum=0;
        //     for(i=(i+1)%n;i!=1;i=(i+1)%n){
        //         sum+=nums[i];
        //         if(sum>maximum_sum){
        //             maximum_sum=sum;
        //         }
        //         if(sum<0){
        //             sum=0;
        //         }
        //     }
        // }
        //  return maximum_sum;
        int total_sum=0;
        int minimum_sum=INT_MAX;
        int maximum_sum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<minimum_sum){
                minimum_sum=sum;
            }
            if(sum>0){
                sum=0;
            }
        }
        int sum1=0;
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            if(sum1>maximum_sum){
                maximum_sum=sum1;
            }
            if(sum1<0){
                sum1=0;
            }
        }
        if(total_sum==minimum_sum){
            return maximum_sum;
        }
        else{
            return max(maximum_sum,total_sum-minimum_sum);
        }
    }
};