class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        int size = nums.size();
        for(int i : nums)
        {
            dict[i]++;
        }
        vector<vector<int>> res(size + 1);
        for(auto& pairs : dict)
        {
            res[pairs.second].push_back(pairs.first);
        }
        vector<int> ans;
        for(int i = size; i >= 0 && ans.size() < k; i--){
            for(int num : res[i])
            {
                ans.push_back(num);
                if(ans.size() == k)
                {
                    return ans;
                }
            }
        }
        return ans;
    }
};
