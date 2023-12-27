class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        max_longest_streak = 0

        hash_set = set(nums)
        print (hash_set)

        for num in hash_set:
            
            if num-1 not in hash_set:
                current_number = num
                longest_streak = 1

                while (current_number + 1 ) in hash_set:
                    current_number = current_number + 1
                    longest_streak = longest_streak + 1

                max_longest_streak = max(longest_streak, max_longest_streak)

        return max_longest_streak
        

        