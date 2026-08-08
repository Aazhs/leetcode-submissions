# Last updated: 9/8/2026, 12:36:38 am
class Solution(object):
    def missingNumber(self, nums):
        largest=len(nums)
        
        sum=largest*(largest+1)/2

        for i in nums:
            sum=sum-i

        return sum