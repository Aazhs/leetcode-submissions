# Last updated: 9/8/2026, 12:35:49 am
class Solution(object):
    def triangleType(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        a, b, c = sorted(nums)
      
        if a + b <= c:
            return "none"
            
        if a == c:            
            return "equilateral"
        if a == b or b == c:  
            return "isosceles"
            
        return "scalene"