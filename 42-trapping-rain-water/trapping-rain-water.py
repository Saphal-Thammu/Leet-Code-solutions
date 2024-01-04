class Solution:
    def trap(self, height: List[int]) -> int:
        

        # the logic is figuring out the [ min(max_height_from_left, max_height_from_right) - height at that point ] 

        # We write a list of max left height at every indice by going through the height list once
        # Again going and figuring out the max right height at every index by going throught the heightlist again once more.
        # Now again i go one more time through both the lists and writing another list of min(max_height_from_left, max_height_from_right) 
        # Now we need to pass through the height list again and do this formula: 
        # [ min(max_height_from_left, max_height_from_right) - height at that point ]
        # if negative we do not calculate that position and mark as zero
        # if positive we get that position the amount of water to be stored
        # summing the array now will get us total water to be stored.


        max_left_height_list = [None] * len(height) 
        max_right_height_list = [None] * len(height) 
        min_height_at_index = [None] * len(height) 
        result_list = [None] * len(height)

        temp_height = height[0]

        for i in range(len(height)):

            temp_height = max(temp_height, height[i])
            max_left_height_list[i] = temp_height


        temp_height = height[len(height) - 1]

        for i in range(len(height)-1, -1, -1):

            temp_height = max(temp_height, height[i])
            max_right_height_list[i] = temp_height


        temp_height = height[0]

        for i in range(len(height)):

            temp_height = min(max_left_height_list[i], max_right_height_list[i])
            min_height_at_index[i] = temp_height


        for i in range(len(height)):

            diff = min_height_at_index[i] - height[i]
            
            if diff <= 0:
                result_list[i] = 0
            else:
                result_list[i] = diff

        return sum(result_list)