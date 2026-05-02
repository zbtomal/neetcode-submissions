class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, cnt = 0;
        for (auto i:nums) {
            if (i != 0) product *= i; 
            else cnt++;
        }
        
        if (cnt>1) {
            vector<int> ans(nums.size(), 0);
            return ans;
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int x;
            if (nums[i] != 0) {
                if (cnt == 0) x = product/nums[i];
                else x = 0;
            }
            else x = product;
            ans.push_back(x);
        }
        return ans;
    }
};