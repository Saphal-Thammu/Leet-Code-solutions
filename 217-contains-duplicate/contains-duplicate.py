class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        if (nums is None) or (len(nums) is 0):
            return False
        
        nums.sort()

        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                return True
        
        return False
