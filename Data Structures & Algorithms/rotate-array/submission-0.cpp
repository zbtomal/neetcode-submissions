class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k==0) return;
        int x = (n+k-1)/k;
        vector<int>v=nums;
        for (int t=0; t<k; t++) {
            int i=t;
            int temp = v[t];
            while(i<n) {
                int pos = (i+k)%n;
                int temp2 = v[pos];
                nums[pos]=temp;
                temp = temp2;
                i+=k;
            }
        }
    }
            // int n = nums.size();
        // vector<int>vis(n, 0);
        // int x = 0, temp = nums[0];
        // for (int i = 0; i < n; i++) {
        //     if (vis[x]) x++;
        //     else vis[x]++; 
        //     int cur = (x+k)%n;
        //     int temp2 = nums[cur];
        //     nums[cur] = temp;
        //     temp = temp2;
        //     x = cur;
        // }
};