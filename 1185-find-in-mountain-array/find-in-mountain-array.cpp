class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        int peak = start;
        start = 0;
        end = peak;
        while (start<=end){
            int mid = start + (end - start) / 2;
            int val = mountainArr.get(mid);
            if (val == target) {
                return mid;
            } else if (val < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
                 start = peak + 1;
                 end = n - 1;
                while (start <= end) {
                    int mid = start + (end - start) / 2;
                    int val = mountainArr.get(mid);
                    if (val == target) {
                        return mid;
                    } else if (val > target) {
                        start = mid + 1;
                    } else {
                        end = mid - 1;
                    }
                }
                 return -1;
    }
};