class Solution {
public:
    int count_digits (int no){
        int count = 0 ;
        while(no > 0){
            count++;
            no/=10;
        }
        return count;
    }
    int minMergedInteger(vector<int>& nums) {

        // long long minimum_value;
        // for(int i=0;i<nums.size()-1;i=i+2){
        //    string ans = to_string(nums[i])+to_string(nums[i+1]);
        //     long long result = stoi(ans);
        //     minimum_value = min(minimum_value,result);
        // }
        // return minimum_value;

        int minimum_no = INT_MAX;
        int n = nums.size()-1;
        for(int i=0;i<n;i=i+2){
            int next_no = count_digits(nums[i+1]);
            int combined_no = nums[i]*pow(10,next_no)+nums[i+1];
            minimum_no = min(combined_no , minimum_no);
        }
        return minimum_no;
    }
};