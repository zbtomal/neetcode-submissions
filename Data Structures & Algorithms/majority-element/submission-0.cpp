class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int ans = 0;
        for (auto i: nums) {
            m[i]++;
            if (m[i] > m[ans]) ans = i;
        }
        return ans;
    }
};