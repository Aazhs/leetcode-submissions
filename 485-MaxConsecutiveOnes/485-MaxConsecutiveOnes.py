# Last updated: 9/8/2026, 12:36:30 am
class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        maxn=0  #2
        count=0

        for num in nums:
            if num==1:
                count+=1
                if count>=maxn:
                    maxn=count
            else:
                count=0
        return maxn