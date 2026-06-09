class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        set<int> checker;
        for(int a : nums)
        {
            if(checker.count(a)) return true;
            else checker.insert(a);
        }
        return false;
    }
};