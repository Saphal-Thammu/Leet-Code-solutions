class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        if len(nums) == 0:
            return []
        
        l1=1;
        r1=1;
        
        result=[0]*len(nums)
        lm=[0] * len(nums)
        rm=[0] * len(nums)
        
        lprod=1;
        rprod=1;
        
        for i in range(len(nums)):
            lprod=l1*lprod
            lm[i]=lprod
            l1=nums[i]
            
        for i in range(len(nums)-1,-1,-1):
            rprod=r1*rprod
            rm[i]=rprod
            r1=nums[i]
        
                    
        for i in range(len(nums)):
            result[i]=lm[i]*rm[i]

        
        return result
    
    
        