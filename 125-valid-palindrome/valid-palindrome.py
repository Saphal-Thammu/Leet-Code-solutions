class Solution:
    def isPalindrome(self, s: str) -> bool:

        # # using the string functions

        # newstr = ''

        # for c in s:
        #     if c.isalnum():
        #         newstr = newstr + c.lower()

        # return newstr == newstr[::-1]

        left, right = 0, len(s) - 1

        while left < right:

            while left < right and not self.isalpha(s[left]):
                left = left + 1

            while right > left and not self.isalpha(s[right]):
                right = right - 1

            if s[left].lower() != s[right].lower():
                return False

            left = left + 1
            right = right - 1

        return True

    def isalpha(self, c):

        if ((ord('A') <= ord(c) <= ord('Z')) or
            (ord('a') <= ord(c) <= ord('z')) or
            (ord('0') <= ord(c) <= ord('9'))):

            return True

        else:
            return False