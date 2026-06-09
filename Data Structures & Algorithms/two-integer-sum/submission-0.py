class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        listDict = {

        }
        
        for i in range(0, len(nums)):
            listDict.update({nums[i] : i})
        
        for i in range(0,len(nums)):
            firstNum = nums[i]
            secNum = target - firstNum

            if (secNum in listDict) and listDict[secNum] != i:
                resultantList = [i, listDict[secNum]]
                return resultantList