class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:

        if nums is None or len(nums) == 0:
            return None

        product = 1

        left = 0
        right = 0
        count = 0

        an = 0

        for i in range(len(nums)):

            product = product * nums[right]
            # print (product)

            while (product >= k and left < right):

                # print(" the left is {}".format(left))
                # print(" the right is {}".format(left))

                product //= nums[left]
                left = left + 1
                an = 1

            if an == 1:
                # print(" the product once we entered the above loop is {}".format(product))
                an = 0

            # print (product)
            if product <k:
                count = count + right - left + 1

            right = right + 1

        return count











                

