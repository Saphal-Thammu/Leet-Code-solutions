class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:

        print(self.dist([1,1]))

        ans = sorted(points,key= lambda x:self.dist(x))

        return ans[:k]
        
    
    def dist(self,p)->int:
        ans =  math.sqrt(p[0]**2+p[1]**2)

        return ans