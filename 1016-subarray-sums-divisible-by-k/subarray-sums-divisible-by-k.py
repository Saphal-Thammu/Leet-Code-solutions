class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        

        running_sum = 0
        count = 0
        map_d = dict()

        map_d[0] = 1


        for i in nums:
            
            running_sum = running_sum + i
            # print(f"running_sum is {running_sum}")
            modulo = running_sum % k
            # print(f"modulo is {modulo}")

            if modulo in map_d:
                count = count + map_d[modulo]
                map_d[modulo] += 1
                # print(f"dictionary when element exists is {map_d}")

            else:
                map_d[modulo] = 1
                # print(f"dictionary when element does not exists is {map_d}")

        return count

