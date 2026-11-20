class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                pivot = i - 1;
                break;
            }
        }
        if (pivot != -1) {
            int swapIndex = pivot;

            for (int j = n - 1; j > pivot; j--) {
                if (nums[j] > nums[pivot]) {
                    swapIndex = j;
                    break;
                }
            }

            swap(nums[pivot], nums[swapIndex]);
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};