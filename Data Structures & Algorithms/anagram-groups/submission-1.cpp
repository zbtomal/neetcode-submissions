class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort(strs.begin(), strs.end());
        vector<vector<int>> a(strs.size(), vector<int>(26,0));
        for (int i=0; i<strs.size(); i++) {
            for (int j=0; j<strs[i].size(); j++) {
                int pos = strs[i][j] - 'a';
                a[i][pos]++;
            }
        }

        vector<vector<string>> ans;
        vector<string>s;
        //s.push_back(strs[0]);
        vector<int>taken(strs.size(), 0);
        for(int i=0; i<strs.size(); i++) {

            if (taken[i]==0) {
                s.push_back(strs[i]);
                taken[i]++;
                for (int j=i+1; j<strs.size(); j++) {
                    if (a[i]==a[j] and taken[j]==0) {
                        s.push_back(strs[j]);
                        taken[j]++;
                    }
                }
                ans.push_back(s);
                s.clear();
            }

            // if (a[i]==a[i-1]) {
            //     s.push_back(strs[i]);
            // }
            // else {
            //     ans.push_back(s);
            //     s.clear();
            //     s.push_back(strs[i]);
            // }
            
        }
        //ans.push_back(s);
        return ans;
    }
};
