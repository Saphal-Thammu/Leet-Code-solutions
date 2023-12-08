class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length = len(nums)
        if len(nums) is 0:
            return False

        left_product = [0] * len(nums)
        right_product = [0] * len(nums)
        result = [0] * len(nums)

        running_product = 1
        rp = running_product

        left_product[0] = 1

        # Forward Pass
        for i in range(1,len(nums)):
            rp = rp * nums[i-1]
            left_product[i] = rp

        rp = 1
        right_product[len(nums)-1]=1
        # Backward Pass
        for i in range(len(nums)-2, -1, -1):
            rp = rp * nums[i+1]
            right_product[i] = rp 

        for i in range(len(nums)):
            result[i] = left_product[i] * right_product[i]

        return result