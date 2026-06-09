class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size(), left = 1, right = size - 1;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < size; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            left = i + 1;
            right = size - 1;
            while(left < right){
                if(nums[left] + nums[right] == -nums[i]){
                    ans.push_back({ nums[i],nums[left],nums[right]});
                    --right;
                    ++left;
                    while(left < right && nums[left] == nums[left-1]) ++left;
                    while(left < right && nums[right] == nums[right+1]) --right;
                }
                else if(nums[left] + nums[right] > -nums[i]) --right;
                else ++left;
            }
        }
        return ans;
    }
};