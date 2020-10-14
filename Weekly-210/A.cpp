
static auto fast = []() {ios_base::sync_with_stdio(false);cin.tie(nullptr);return 0;}();
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, count = 0, n = s.size();
        for(int i = 0; i < n; ++i) {
            if(s[i] == '(') count++;
            else if(s[i] == ')') count--;
            ans = max(ans, count);
        }
        return ans;
    }
};