class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maximum_product=INT_MIN;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int pro=1;
        //         for(int k=i;k<=j;k++){
        //             pro*=nums[k];
        //         }
        //     if(pro>maximum_product){
        //         maximum_product=pro;
        //     }
        //   }
        // }
        // return maximum_product;

        // int curr_pro=1;
        // int m=INT_MIN;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     curr_pro*=nums[i];
        //     if(curr_pro==0){
        //         curr_pro=1;
        //         continue;
        //     }
        //     m=max(curr_pro,m);
        // }
        // int curr=1;
        // for(int j=n-1;j>0;j--){
        //     curr*=nums[j];
        //     if(curr_pro==0){
        //         curr_pro=1;
        //         continue;
        //     }
        //     m=max(curr,m);
        // }
        // if(m==INT_MIN) return 0;
        // return m;

        int minimum=nums[0];
        int maximum=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int num=nums[i];
            int tempmin=min({num, minimum*num, maximum*num});
            int tempmax=max({num, maximum*num, minimum*num});
            minimum=tempmin;
            maximum=tempmax;
            ans=max(ans,maximum);
        }
        return ans;
    }
};