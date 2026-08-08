# Last updated: 9/8/2026, 12:36:46 am
class Solution(object):
    def isAnagram(self, s, t):
        if len(s)!=len(t):
            return False
        
        sd={}
        td={}

        for i in range(len(s)):
            sd[s[i]]=1+sd.get(s[i],0)
            td[t[i]]=1+td.get(t[i],0)

        return sd==td
        