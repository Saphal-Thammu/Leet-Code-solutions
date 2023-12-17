class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:

        bit_mask1=0

        for i in nums:
            bit_mask1^=i
        # first bitmask will contain combination of both missing numbers

        diff = bit_mask1 & (-bit_mask1)
        # creating the intermediate value

        bit_mask2=0
        for i in nums:
            if (diff&i) != 0:
                bit_mask2^=i
        # this second bitmask will give us one of the missing number

        return [bit_mask2,bit_mask2^bit_mask1]
            

        
        