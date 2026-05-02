class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> temp;
        for (int i=0; i < gas.size(); i++) {
            int x = gas[i] - cost[i];
            temp.push_back(x);
        }

        vector<int> a;
        a.insert(a.end(), temp.begin(), temp.end());
        a.insert(a.end(), temp.begin(), temp.end());

        int x = 0, cnt = 0;
        for (int i = 0; i < a.size(); i++) {
            x += a[i];
            cnt++;

            if (x<0) {
                cnt = 0;
                x = 0;
            }

            if (cnt == gas.size() and x >= 0) return i - gas.size() + 1;
        }
        return -1;
    }
};