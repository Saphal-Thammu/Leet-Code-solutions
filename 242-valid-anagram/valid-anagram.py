class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if s is None or t is None:
            return False

        s_map = {}
        t_map = {}

        for i in s:

            if i not in s_map:
                s_map[i] = 1
                continue
            
            s_map[i] += 1

        for i in t:

            if i not in s_map:
                return False
            
            if i in t_map:
                t_map[i] += 1
                continue
            
            t_map[i] = 1

        if len(s_map) != len(t_map):
            return False

        for i in t_map:
            if s_map[i] != t_map[i]:
                return False


        return True