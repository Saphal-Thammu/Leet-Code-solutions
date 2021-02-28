class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        
        if(len(nums) == 0):
            return 0
        nums.sort()
        sum=0
        b=len(nums)
        
        for a in range(0,b,2):
            sum+=nums[a]
        
        return sum
        
        
        