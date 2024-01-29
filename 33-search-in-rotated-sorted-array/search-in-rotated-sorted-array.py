class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        l, r = 0, len(nums) - 1

        mid = None

        while (l<=r): 
            # It is less thN OR EQUAL TO BECAUS EWE MIGHT HAVE JUST ONE ELEMENT IN the nums list

            mid = (l+r)//2

            if target == nums[mid]:
                return mid

            # left sorted array
            if nums[l] <= nums[mid]:
                if target > nums[mid]:
                    l = mid + 1
                elif target < nums[l]:
                    l = mid + 1
                else:
                    r = mid - 1

            # else case will check if right portion is sorted
            else:
                if target < nums[mid]:
                    r = mid - 1
                elif target > nums[r]:
                    r = mid - 1
                else:
                    l = mid + 1

        return -1