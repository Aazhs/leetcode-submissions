# Last updated: 9/8/2026, 12:37:00 am
class Solution(object):
    def isPalindrome(self, s):
        d1={}
        ns=""
        for l in s:
            if l.isalnum():
                ns+=l
        ns=ns.lower()
        nsr=""
        for l in ns:
            nsr=l+nsr
        if nsr == ns:
            return True
        else:
            return False
        