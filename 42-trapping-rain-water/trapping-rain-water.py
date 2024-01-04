class Solution:
    def trap(self, height: List[int]) -> int:
        
        # This is space complexity of 0(1) solution
        # The logic is figuring out the [ min(max_height_from_left, max_height_from_right) - height at that point ] 
        # Left pointer starts at 0th index and right at the end of the height list
        # We will have two variable max_left_height and max_right_height
        # Their values will be the values at left pointer and right pointer, however initially we will have zero as we need two walls for water

        left, right = 0, len(height) - 1

        max_left_height = height[left]
        max_right_height = height[right]

        result = 0

        while left < right:
            
            if max_left_height < max_right_height:
                left = left + 1
                max_left_height = max(max_left_height, height[left])
                result = result + (max_left_height - height[left])

            else:
                right = right - 1
                max_right_height = max(max_right_height, height[right])
                result = result + (max_right_height - height[right])

        return result

            
