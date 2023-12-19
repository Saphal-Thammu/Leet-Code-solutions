class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        if nums is None or len(nums) == 0:
            return None

        map_d = dict()
        result=[]
        for i in range(len(nums)):
            
            compliment = target - nums[i]

            if compliment in map_d:
                result.extend([ i, map_d[compliment]])
                break

            map_d[nums[i]] = i

        return result 