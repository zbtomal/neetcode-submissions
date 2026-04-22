class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>pos;

        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (pos.find(x) != pos.end()) {
                ans.push_back(pos[x]);
                ans.push_back(i);
                return ans;
            }
            pos[nums[i]] = i;
        }
    }
};
