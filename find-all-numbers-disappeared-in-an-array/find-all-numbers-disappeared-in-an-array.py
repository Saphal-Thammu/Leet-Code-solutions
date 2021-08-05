class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        
        answer=[]
        
        for i in range(len(nums)):
            a=abs(nums[i])-1
            if nums[a] > 0:
                nums[a]=nums[a]*-1
            # print(nums[i])
            
        for i in range(len(nums)):
            if(nums[i]>0):
                answer.append(i+1)
                # print(i)
                
        return answer
            
        
        
        