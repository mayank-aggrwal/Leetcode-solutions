class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;
        unordered_map<int, int> um;
        
        for(int i = 0; i < n; ++i) {
            int curr = nums[i];
            if(um.count(k - curr) > 0) {
                ans++;
                if(um[k - curr] == 1) {
                    um.erase(k - curr);
                }
                else {
                    um[k - curr]--;
                }
            }
            else {
                um[curr]++;
            }
            // cout << i << " : " << um[1] << " ; " << ans << endl;
        }
        
        return ans;
        
    }
};