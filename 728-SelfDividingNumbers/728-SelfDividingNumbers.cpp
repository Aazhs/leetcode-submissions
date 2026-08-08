// Last updated: 9/8/2026, 12:36:25 am
class Solution {
public:
    bool check(int num){
        int n = num;
        while(num>0){
            int rem = num%10;
            if(rem == 0 || n%rem != 0) break;
            num /= 10;
        }
        return num==0;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i<=right; i++){
            if(check(i))
            ans.push_back(i);
        }
        return ans;
    }
};