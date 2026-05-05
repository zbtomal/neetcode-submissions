class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int i=0; i<numbers.size(); i++) {
            m[numbers[i]] = i+1;
        }
        for (int i=0; i<numbers.size(); i++) {
            int x = target - numbers[i];
            if (m[x]>numbers.size() or !m[x]) continue;
            auto pos = find(numbers.begin()+i+1, numbers.end(), x);
            if (pos != numbers.end()) {
                ans.push_back(i+1);
                ans.push_back(distance(numbers.begin(), pos) + 1);
                break;
            }
        }
        return ans;
    }
};