class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        if len(nums) == 0 or nums is None:
            return None

        total_sum = sum(nums)

        # print(f"the total sum is {total_sum}")

        left_sum = 0
        right_sum = 0

        for index, value in enumerate(nums):

            if index == 0:
                left_sum = 0
            else:
                left_sum += nums[index-1]

            # print(f"the left sum is {left_sum}")

            right_sum = total_sum - left_sum - value
            # print(f"the right sum is {right_sum}")

            if right_sum == left_sum:
                return index

        return -1 