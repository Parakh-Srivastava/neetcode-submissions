class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int size = nums.length;
        Map<Integer,Integer> check = new HashMap<>(size);

        for(int i = 0; i < size; i++){

            if(check.containsKey(target - nums[i])){
                return new int[] {check.get(target - nums[i]), i};
            }
            check.put(nums[i],i);
        }
        return new int[0];
    }
}
