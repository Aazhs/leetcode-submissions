# Last updated: 9/8/2026, 12:36:44 am
class Solution(object):
    def addDigits(self, num):
        
        while num >= 10:
            ns = str(num)
            sum = 0
            for n in range(len(ns)):
                sum += int(ns[n])
            
            num = sum
            
        return num