class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        
        # find the longest subarray such that the sum is (total_sum - k )
        total_sum = sum(nums)
        running_sum = 0
        longest_sequence = 0
        flag = 0

        #  using a sliding window technique find out the largest subarray in the middle which is meeting the condition 
        # target = total_sum - k

        left = 0
        right = 0
        target = total_sum - x
        # print(f"target is {target}")

        

        # for index, val in enumerate(nums):

        while right < len(nums) and left <= right:
            
            # print(f"right is {right}")
            # print(f"left is {left}")
            running_sum = running_sum + nums[right]

            # print(f"running_sum is {running_sum}")

            while left <= right and running_sum > target:
                
                running_sum = running_sum - nums[left]
                # print(f"running_sum after decreasing is {running_sum}")
                left = left + 1

            if running_sum == target:

                length = right - left + 1
                flag = -1

                if length > longest_sequence:
                    longest_sequence = length

            

            right = right + 1

        if flag == 0:
            answer = -1
        else:
            answer = len(nums) - longest_sequence

        return answer

            
