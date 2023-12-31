class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        result = []
        nums.sort()

        for index, val in enumerate(nums):

            if index > 0 and val == nums[index - 1]:
                continue

            left = index + 1
            right = len(nums) - 1

            while left < right:
                sum3 = val + nums[left] + nums[right]

                if sum3 > 0:
                    right = right - 1

                elif sum3 < 0:
                    left = left + 1

                else:
                    result.append([val, nums[left], nums[right]])
                    left = left + 1
                    while nums[left] == nums[left - 1] and left < right:
                        left = left + 1

        return result
        