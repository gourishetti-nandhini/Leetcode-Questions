class Solution {
public:
    bool check(vector<int>& nums, vector<int>& target) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            freq[target[i]]--;
        }
        for (auto x : freq) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
    int countSuffix(vector<int>& nums, vector<int>& target) {
        if(!check(nums,target)){
            return 0;
        }
        int dsc_index = nums.size() - 1;
        for (; dsc_index > 0; dsc_index--) {
            if (target[dsc_index] > target[dsc_index - 1]) {
                break;
            }
        }
        // cout<<dsc_index<<endl;
        bool is_solution = false;
        for (int j = 0; j < dsc_index; j++) {
            if (nums[j] != target[j]) {
                cout << "fghjk" << endl;
                return 0;
            }
        }
        int c = 0;
        int s = dsc_index;
        for (; s < nums.size(); s++) {
            if (nums[s] == target[s]) {
                c++;
            } else {
                break;
            }
        }
        cout << s << endl;
        if (s != nums.size()) {
            return c + 1;
        }
        return c;
    }
};