class Solution(object):
    def areOccurrencesEqual(self, s):
        mp={}
        for ch in s:
            mp[ch]=mp.get(ch,0)+1
        for i in range(len(s)):
            if mp[s[i]]!= mp[s[i-1]]:
                return False
        return True
        """
        :type s: str
        :rtype: bool
        """
        