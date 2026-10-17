class Solution(object):
    def productExceptSelf(self, nums):
        pre=[1]*(len(nums)+1)
        suff=[1]*(len(nums)+1)
        for i in range(len(nums)):
            pre[i+1]=pre[i]*nums[i]
        n=len(nums)
        for i in range(n-1,-1,-1):
            suff[i]=suff[i+1]*nums[i]
        ans=[0]*n

        for i in range(len(nums)):
            ans[i]=pre[i]*suff[i+1]
        return ans
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        