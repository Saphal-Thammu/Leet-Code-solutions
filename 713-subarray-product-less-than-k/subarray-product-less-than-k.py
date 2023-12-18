class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:

        if len(nums) == 0 or len(nums) is None:
            return 0

        l = 0
        count = 0
        product = 1

        for r in range(len(nums)):

            product = product * nums[r]

            if product >= k:
                while product >=k and l<=r:
                    product /= nums[l]
                    l += 1

            if product < k:
                count += r-l + 1 # the +1 is because we can have single element array too.

                
        return count




                

