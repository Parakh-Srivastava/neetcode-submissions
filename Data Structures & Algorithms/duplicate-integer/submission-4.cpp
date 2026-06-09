class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        set<int> checker;
        for(int a : nums)
        {
            checker.insert(a);
        }
        
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