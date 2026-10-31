class Solution {
public:
    int numberOfSteps(int num) {
        int step_count = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                num = num / 2;
                step_count++;
            } else {
                num = num - 1;
                step_count++;
            }
        }
        return step_count;
    }
};