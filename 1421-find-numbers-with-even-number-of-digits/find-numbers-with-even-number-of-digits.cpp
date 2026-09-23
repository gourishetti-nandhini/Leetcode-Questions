class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int count_of_single_element=0;
            while(temp>0){
                int last_digit=temp%10;
                count_of_single_element+=1;
                temp/=10;
            }
            if(count_of_single_element%2==0){
                count+=1;
            }
        }
        return count;
    }
};