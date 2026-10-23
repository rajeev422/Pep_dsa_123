class Solution(object):
    def lengthOfLastWord(self, s):
        n=len(s)
        lenn=0
        for i in range(n-1,-1,-1):
            if s[i]==" ":
                if lenn>0:
                    return lenn
            else:
                lenn+=1
        return lenn
        """
        :type s: str
        :rtype: int
        """
        