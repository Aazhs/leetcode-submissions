// Last updated: 9/8/2026, 12:37:11 am
class Solution {
public:
    int reverse(int x) {

        int64_t ans=0;

        int64_t thing = abs((int64_t)x);

        while(thing>0){
            ans=ans*10+thing%10;
            thing /= 10;
        }


        if (ans > INT_MAX) return 0;

        if(x<0) return ans*(-1);
        else return ans;
    }
};