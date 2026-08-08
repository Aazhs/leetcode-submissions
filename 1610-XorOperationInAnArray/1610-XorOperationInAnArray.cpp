// Last updated: 9/8/2026, 12:36:08 am
class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        for(int i=0;i<n;++i){
            arr[i]=start+(2*i);
        }
        int x=0;
        for(int i=0;i<n;++i){
            x=x^arr[i];
        }
        return x;
    }
};