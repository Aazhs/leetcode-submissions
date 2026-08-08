// Last updated: 9/8/2026, 12:35:59 am
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0,ans=0;
        for(int i=0;i<nums.size();++i){

            int ls=0,rs=0;
            for(int j=0;j<nums.size();++j){
                if(j<i) ls+=nums[j];
                if(j>i) rs+=nums[j];
            }

            if(ls == rs) return i;
        }
        return -1;
    }
};