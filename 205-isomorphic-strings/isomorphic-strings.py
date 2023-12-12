class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        
        if s is None or t is None:
            return False

        if len(s) != len(t):
            return False

        my_dict = dict()
        my_set = set()

        for i in range(len(s)):

            if s[i] not in my_dict:
                my_dict[s[i]] = t[i]
                if t[i] in my_set:
                    return False
                my_set.add(t[i])

            if s[i] in my_dict:
                if my_dict[s[i]] != t[i]:
                    return False

        return True