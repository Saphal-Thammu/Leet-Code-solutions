class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        
        map_d = {0 : -1}

        tsum = 0

        for i,val in enumerate(nums):
            
            tsum = tsum + val
            reminder = tsum % k

            # print(reminder)
            # print("i is {}".format(i))

            # if reminder not in map_d:
            #     map_d[reminder] = i
            
            # print("map_d[reminder] is {}".format(map_d[reminder]))

            if reminder in map_d:
                diff = i - map_d[reminder]
                print("diff is {}".format(diff))
                if ( diff ) >= 2:
                    return True
            else: # Doesn't matter if we add into the map_d before or rather after
                map_d[reminder] = i

        return False