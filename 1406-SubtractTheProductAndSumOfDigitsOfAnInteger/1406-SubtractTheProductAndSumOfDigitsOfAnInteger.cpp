// Last updated: 9/8/2026, 12:36:15 am
class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=0,s=0,p=1;
        while(n>0){
            num=n%10;
            s+=num;
            p*=num;
            n=n/10;
        }
        return p-s;
    }
};