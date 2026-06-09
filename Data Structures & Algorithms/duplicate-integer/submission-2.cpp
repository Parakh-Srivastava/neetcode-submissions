class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int a;
        unordered_map<int,int> checker;
        for(a = 0; a < nums.size(); a++)
        {
            checker.insert({nums[a],a});
        }
        auto it = checker;
        if(nums.size() == checker.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};