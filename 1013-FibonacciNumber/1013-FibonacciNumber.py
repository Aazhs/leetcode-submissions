# Last updated: 9/8/2026, 12:36:20 am
class Solution(object):
    def fib(self, n):
        #n0 n1              #0 1 1 2 3 5
        #n0 n1 n2
        #.  n0 n1 n2
        n0=0
        n1=1
        n2=1

        if n-1>0:   
            for i in range(n-1):
                n2=n1+n0
                n0=n1
                n1=n2
            return n2
        else:
            if n==0:
                return 0
            if n==1:
                return 1

