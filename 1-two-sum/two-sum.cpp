class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<i;j++){
    //         if(nums[i]+nums[j]==target){
    //          return {i,j};
    //         }
    //     }
    //    }
    //    return {} 

    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int current=nums[i];
        int complement=target-current;
        if(mp.find(complement)!=mp.end()){
            return {i,mp[complement]};
        }
        mp[current]=i;
    }
    return {};
    }
};