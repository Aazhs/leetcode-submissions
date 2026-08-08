# Last updated: 9/8/2026, 12:35:58 am
class Solution(object):
    def countDigits(self, num):
        """
        :type num: int
        :rtype: int
        """

        count=0
        tnum=num

        for j in range(len(str(num))):
            if tnum%int(num%10)==0:
                count+=1
            num=num/10

        return count