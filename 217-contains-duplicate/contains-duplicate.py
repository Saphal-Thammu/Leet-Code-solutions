class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        if (nums is None) or (len(nums) is 0):
            return False

        myset = set(nums)

        if len(myset) == len(nums):
            return False
        else:
            return True