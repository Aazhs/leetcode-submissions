// Last updated: 9/8/2026, 12:36:05 am
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = INT_MIN;
        int sum = 0;
        for(int i:gain){
            sum+=i;
            if(sum>max) max=sum;
        }

        return max>=0 ? max : 0;
    }
};