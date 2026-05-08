class Solution {
public:
    string simplifyPath(string path) {
        string s = "";
        deque<string>d;
        for (char c: path) {
            if (c == '/') {
                if (s == "..") {
                    if (!d.empty()) d.pop_back();
                    s = "";
                }
                else if (s == ".") s = "";
                else if (s != "") {
                    d.push_back(s);
                    s = "";
                }
            }
            else s += c;
        }
        if (s == "..") {
            if (!d.empty()) d.pop_back();
            s = "";
        }
        else if (s == ".") s = "";
        else if (s != "") d.push_back(s);


        if (d.empty()) return "/";

        string ans = "";
        while(!d.empty()) {
            ans += '/' + d.front();
            d.pop_front();
        }
        return ans;
    }
};