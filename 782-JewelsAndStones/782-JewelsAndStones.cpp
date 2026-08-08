// Last updated: 9/8/2026, 12:36:23 am
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char s:stones){
            for(char j:jewels){
                if(s==j){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};