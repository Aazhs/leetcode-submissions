// Last updated: 9/8/2026, 12:35:46 am
class Solution {
public:

    int conv(int num,int n){
        int wnum = ((num % n) + n) % n;
        return wnum;
    }

    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);

        for(int i = 0 ; i < n ; ++i){
            if(nums[i]==0) ans[i]=0;

            if(nums[i]>0){
                if((i+nums[i])>=n){
                    int thing = (i+nums[i])%n;
                    ans[i]=nums[thing];
                }
                else ans[i]=nums[i+nums[i]];
            }
            
            if(nums[i]<0){
                if(i-abs(nums[i])>=0){
                    ans[i]=nums[i-abs(nums[i])];
                }
                if(i-abs(nums[i])<0){
                    int thing =  conv((i-abs(nums[i])),n);
                    ans[i]=nums[thing];
                }
            }
        }

        return ans;

    }
};