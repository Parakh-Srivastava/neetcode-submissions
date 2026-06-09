class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int a;
        unordered_map<int,int> checker;
        for(a = 0; a < nums.size(); a++)
        {
            if(checker.count(nums[a])) return true;
            checker.insert({nums[a],a});
        }
        return false;
    }
};