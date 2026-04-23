class Solution {
public:
    bool canJump(vector<int>& nums) {
        //vector<bool>ok(nums.size(), false);
        int i = 0, x = 0;
        //ok[i]=true;
        while(i<nums.size()) {
            if (nums[i]) {
                x = max(x, i+nums[i]);
            }
            if (x>i) i++;
            else break;
            //i++;
        }
        return i>=nums.size()-1;
    }
};