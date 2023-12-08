class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """

        m = len(matrix)
        n = len(matrix[0]) 

        left = 0
        right = n - 1
        top = 0
        bottom = m - 1

        result = []
        idx = 0

        while((top <= bottom) and (left<= right)):
            # top row 
            for i in range(left, right + 1, 1):
                result.append(matrix[top][i])

            top += 1
            
            if (top<=bottom and left<= right):
                # right column
                for i in range(top, bottom + 1, 1):
                    result.append(matrix[i][right])

            right -= 1

            if (top<=bottom and left<= right):
                # bottom row
                for i in range(right, left-1, -1):
                    result.append(matrix[bottom][i])

            bottom -= 1

            if (top<=bottom and left<= right):
                # left column
                for i in range(bottom, top-1, -1):
                    result.append(matrix[i][left])
            
            left += 1

        return result

