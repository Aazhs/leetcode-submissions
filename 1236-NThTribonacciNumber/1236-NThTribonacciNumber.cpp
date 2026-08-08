// Last updated: 9/8/2026, 12:36:17 am
class Solution {
public:
    int tribonacci(int n) {
        int a0=0;
        int a1=1;
        int a2=1;
        int an;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;

        for(int i = 3;i<=n;++i){
            an=a0+a1+a2;
            a0=a1;
            a1=a2;
            a2=an;
        }
        return a2;
    }
};