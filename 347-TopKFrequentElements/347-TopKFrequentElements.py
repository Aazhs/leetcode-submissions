# Last updated: 9/8/2026, 12:36:40 am
class Solution(object):
    def topKFrequent(self, nums, k):
        dih={}

        for i in nums:
            dih[i]=1+dih.get(i,0)   #dih = {num:how many times its repeated}
        ans=[]
        while len(ans)<k:
            maxval=max(dih.values())
            for key,value in list(dih.items()): #dih.items() makes non iterable tuple
              if value==maxval:
                    ans.append(key)
                    dih.pop(key)
                    if len(ans)==k:
                      return ans
        return ans