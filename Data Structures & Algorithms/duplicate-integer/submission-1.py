class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        tempSet = set(nums)
        if len(tempSet) == len(nums):
            return False
        else:
            return True
        