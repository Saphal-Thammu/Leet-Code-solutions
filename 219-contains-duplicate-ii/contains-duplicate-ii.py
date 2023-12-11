class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        
        m = len(nums)

        if nums is None or m==0:
            return False

        mydict = {}

        for i,j in enumerate(nums):

            if j in mydict and abs(mydict[j] - i) <=k:
                return True

            mydict[j] = i

        return False
