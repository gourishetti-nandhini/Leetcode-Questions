class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n=nums.size();
       vector<int>v2(n+1,0);
       vector<int>v3;
       for(int i=0;i<n;i++){
            v2[nums[i]]=1;
       }
       for(int i=1;i<=n;i++){
        if(v2[i]==0){
            v3.push_back(i);
        }
       }
       return v3;
    }
};