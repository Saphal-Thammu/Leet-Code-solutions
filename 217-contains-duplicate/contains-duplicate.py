class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if (nums is None) or (len(nums) is 0):
            return False

        myset = set()

        for i in nums:
            if i in myset:
                return True
            myset.add(i)
        
        return False