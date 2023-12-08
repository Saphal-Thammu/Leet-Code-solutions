class Solution(object):
    def findDiagonalOrder(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[int]
        """

        if not mat or not mat[0]:
            return []

        m = len(mat)
        n = len(mat[0])

        result = [0]*(m*n)

        idx = 0
        i = 0
        j = 0
        dir = 1

        while(idx < (m*n)):
            result[idx] = mat[i][j]

            if dir == 1: # Upward flow
                if j == n-1:
                    i += 1
                    dir = -1
                elif i == 0:
                    j += 1
                    dir = -1
                else:
                    i -= 1
                    j += 1
            else: # Downward flow
                if i == m-1:
                    j += 1
                    dir = 1
                elif j == 0:
                    i += 1
                    dir = 1
                else:
                    i += 1
                    j -= 1

            idx += 1

        return result
