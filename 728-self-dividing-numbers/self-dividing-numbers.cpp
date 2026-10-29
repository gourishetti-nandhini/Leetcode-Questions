class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp=i;
            bool is_valid = true;
            while(temp>0){
                int last_digit=temp%10;
                if(last_digit==0 || i%last_digit!=0){
                    is_valid=false;
                    break;
                }
                temp/=10;
            }
            if(is_valid){
                ans.push_back(i);
            }
        }
        return ans;
    }
};