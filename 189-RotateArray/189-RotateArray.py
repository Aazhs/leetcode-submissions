# Last updated: 9/8/2026, 12:36:51 am
class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        k=k%len(nums)
        #for original i=0 becomes i=3

        nums[:]=nums[-k:]+nums[:-k]


        