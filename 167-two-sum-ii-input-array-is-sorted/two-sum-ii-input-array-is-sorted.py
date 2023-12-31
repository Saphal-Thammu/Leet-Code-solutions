class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        

        left, right = 0, len(numbers)-1
        result = []
        print(f"the target is {target}")

        while left < right:

            sum2 = numbers[left] + numbers[right]

            print(f"the sum is {sum2}")

            if sum2 > target:
                right = right - 1

            elif sum2 < target:
                left = left + 1

            elif sum2 == target :
                result.extend([left+1, right+1])
                break

        return result