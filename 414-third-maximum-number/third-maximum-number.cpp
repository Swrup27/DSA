class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            int current = nums[i];
            if (current == first || current == second || current == third) {
                continue;
            }

            if (current > first) {
                third = second;
                second = first;
                first = current;
            }
            else if (current > second) {
                third = second;
                second = current;
            }
            else if (current > third) {
                third = current;
            }
        }
        if (third == LONG_MIN) {
            return first;
        }

        return third;
    }
};