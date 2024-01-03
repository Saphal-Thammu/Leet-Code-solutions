class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        # max_area = 0

        # for l in range(len(height)):
        #     for r in range(l+1,len(height)):
        #         # area = breadth * length
        #         area = (r-l) * min(height[l], height[r])
        #         max_area = max(area, max_area)

        # return max_area
        
        max_area = 0

        left, right = 0, len(height) - 1

        while left < right:
                # area = breadth * length
                area = (right-left) * min(height[left], height[right])
                max_area = max(area, max_area)

                if height[left] < height[right]:
                    left = left + 1
                elif height[left] > height[right]:
                    right = right - 1
                else:
                    # we can move either of the pointer
                    left = left + 1

        return max_area

