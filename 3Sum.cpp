class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        unordered_map <int, int> value2id;
        // initial hash map
        for (int i = 0; i < n; i++){
            value2id[nums[i]] = i;
        }
        // i < j < target
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                int target = - (nums[i] + nums[j]);
                if(value2id.count(target) != 0 && j < value2id[target]){
                    res.push_back(vector<int>{nums[i], nums[j], target});
                    // skip duplicate elements
                    j = value2id[nums[j]];
                }
            }
            // skip duplicate elements
            i = value2id[nums[i]];
        }
        return res;
    }
};
