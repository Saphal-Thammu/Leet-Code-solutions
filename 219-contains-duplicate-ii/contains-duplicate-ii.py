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

        l = 0
        hset = set()

        for r in range(m):
            if abs(l-r) > k:
                hset.remove(nums[l])
                l += 1
            
            if nums[r] in hset:
                return True
            else:
                hset.add(nums[r])
        return False



