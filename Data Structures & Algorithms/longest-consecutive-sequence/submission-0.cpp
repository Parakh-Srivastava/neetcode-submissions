class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sets;
        for(int i : nums){
            sets.emplace(i);
        }
        int highestNum = 0;
        for(int num : nums){
            if(!sets.count(num - 1)){
                int streak = 1;
                while(sets.count(num + 1)){
                    streak ++;
                    num++;
                }
                if (streak > highestNum){
                    highestNum = streak;
                }
            }
        }
        return highestNum;
    }
};
