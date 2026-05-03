class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "", s2 = "";
        for (char c:s) {
            if ((c>='a' and c<='z') or (c>='A' and c<='Z') or (c>='0' and c<='9')) {
                s1 += tolower(c);
            }
        }
        s2 = s1;
        reverse(s1.begin(), s1.end());
        return s1 == s2;
    }
};