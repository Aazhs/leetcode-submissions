# Last updated: 9/8/2026, 12:36:54 am
class Solution(object):
    def singleNumber(self, nums):
        n = len(nums)
        frequency_map = {}
        
        for i in range(n):
            if nums[i] in frequency_map:
                frequency_map[nums[i]] += 1
            else:
                frequency_map[nums[i]] = 1
        
        for key in frequency_map:
            if frequency_map[key] == 1:
                return key
        
        return nums[0]
