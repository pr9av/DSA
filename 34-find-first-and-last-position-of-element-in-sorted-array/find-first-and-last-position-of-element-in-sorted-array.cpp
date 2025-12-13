class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = -1, f = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                s = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                f = i;
                break;
            }
        }
        return {s, f};
    }
};