class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int n = s.size();
        
        for (char c:t) {
            if (c == s[i]) i++;
            if (i == n) return true;
        }
        return (i == n);
    }
};