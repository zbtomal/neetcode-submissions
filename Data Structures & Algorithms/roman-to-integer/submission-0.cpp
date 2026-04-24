class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char,int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int temp = m[s[0]];
        for (int i=1; i<s.size(); i++) {
            if (s[i]==s[i-1]) temp += m[s[i]];
            else {
                if (m[s[i]]<m[s[i-1]]) {
                    ans += temp;
                    temp = m[s[i]];
                } else {
                    ans -= temp;
                    temp = m[s[i]];
                }
            }
        }
        ans += temp;
        return ans;
    }
};