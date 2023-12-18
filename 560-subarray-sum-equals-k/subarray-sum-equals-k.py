class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        
        hmap = dict()
        hmap[0] = 1

        tsum = 0 
        count = 0

        for i in range(len(nums)):

            tsum = tsum + nums[i]
            compliment = tsum - k


            if compliment in hmap:
                count += hmap[compliment]

       
            if tsum in hmap:
                hmap[tsum] += 1
            else:
                hmap[tsum] = 1
            
            # print (hmap)

        return count
        
        # count = 0
        # for start in range(len(nums)):
        #     for end in range(start + 1, len(nums)+1):
        #         sum_ = sum(nums[start:end])
        #         if sum_ == k:
        #             count += 1
        # return count