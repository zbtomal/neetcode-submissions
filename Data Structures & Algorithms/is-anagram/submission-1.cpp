class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if (s==t) return true;
        // return false;

        map<char,int>c_s, c_t;
        for (auto i: s) {
            c_s[i]++;
        }
        for (auto i: t) c_t[i]++;

        for (char i='a'; i<='z'; i++) {
            if (c_s[i] != c_t[i]) return false;
        }
        return true;
    }
};
