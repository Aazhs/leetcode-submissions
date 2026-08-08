// Last updated: 9/8/2026, 12:36:55 am
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,maxP=0;
        int n = prices.size();
        while(r<n){
            if(prices[r]>prices[l]){
                maxP=max(prices[r]-prices[l],maxP);
            }
            else{
                l=r;
            }
            r+=1;
        }
        return maxP;
    }
};