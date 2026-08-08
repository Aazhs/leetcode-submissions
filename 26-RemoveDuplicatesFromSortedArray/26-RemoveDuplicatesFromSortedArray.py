# Last updated: 9/8/2026, 12:37:06 am
class Solution(object):
    def removeDuplicates(self, nums):
        # 1 1 2 3 4 4 5
        j=1

        for i in range(1,len(nums)):
            if nums[i]!=nums[i-1]:
                nums[j]=nums[i]
                j+=1
        return j