class Solution:
    def minAddToMakeValid(self, S):
        """
        :type S: str
        :rtype: int
        """
        leftPar = 0
        rightPar = 0
        ans = 0
        for ch in S:
            if ch == '(':
                leftPar += 1
            elif ch == ")":
                if leftPar == 0:
                    ans += 1
                else: 
                    leftPar -= 1
        
        return ans + leftPar