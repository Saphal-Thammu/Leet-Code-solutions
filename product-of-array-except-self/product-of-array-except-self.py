class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        answer=[0]*len(nums)
        l=[0]*len(nums)
        r=[0]*len(nums)
        
        l[0]=1
        r[len(nums)-1]=1
        lprod=1
        rprod=1
        
        
        for i in range(1,len(nums)):
            lprod=nums[i-1]*lprod
            l[i]=lprod
            print(l[i])
            
        for i in range(len(nums)-2,-1,-1):
            rprod=nums[i+1]*rprod
            r[i]=rprod
            print (r[i])
            
        for i in range(0,len(nums)):
            answer[i]=l[i]*r[i]
            
        return answer