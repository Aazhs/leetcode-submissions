// Last updated: 9/8/2026, 12:36:11 am
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size()-1;
        int curs = 0;

        for(int i = 0;i<k;++i){
            curs+=cardPoints[i];
        }

        int maxs = curs;

        
        for(int i = 0;i<k;++i){
            curs = curs-cardPoints[k-i-1]+cardPoints[n-i];
            if(curs > maxs) maxs = curs;
        }

        return maxs;
    }
};