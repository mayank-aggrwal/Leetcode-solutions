
static auto fast = []() {ios_base::sync_with_stdio(false);cin.tie(nullptr);return 0;}();
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int m = roads.size(), ans = 0;
        vector<int> cnt(n, 0);
        // unordered_map<int, unordered_set<int>> map;
        vector<vector<bool>> map(n, vector<bool>(n, 0));
        for(int i = 0; i < m; ++i) {
            cnt[roads[i][0]]++;
            cnt[roads[i][1]]++;
            // map[roads[i][0]].insert(roads[i][1]);
            // map[roads[i][1]].insert(roads[i][0]);
            map[roads[i][0]][roads[i][1]] = 1;
            map[roads[i][1]][roads[i][0]] = 1;

        }
        
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                int tmp = cnt[i] + cnt[j];
                // if(map[i].find(j) != map[i].end()) tmp--;
                tmp -= map[i][j];
                ans = max(ans, tmp);
            }
        }
        return ans;
    }
};