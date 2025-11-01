class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n, 0);
        vector<int> res;
        for (int num : nums) {

            hash[num]++;
            if (hash[num] == 2) {
                res.push_back(num);
            }
        }
        return res;
    }
};