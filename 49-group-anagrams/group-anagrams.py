class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        if strs is None:
            return False
        
        if len(strs) == 0:
            return False
        
        my_dict = {}
        reversed_string = None

        for i in strs:

            reversed_string = ''.join(sorted(i))

            if reversed_string in my_dict:
                my_dict[reversed_string].append(i)
            else:
                my_dict[reversed_string] = []
                my_dict[reversed_string].append(i)

        result = my_dict.values()

        return result