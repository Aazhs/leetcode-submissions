// Last updated: 9/8/2026, 12:36:28 am
class Solution {
public:
    bool judgeCircle(string moves) {
       int arr[2]={0,0};
       for(int i=0;i<moves.size();++i){
            if(moves[i]=='U') arr[1]+=1;
            if(moves[i]=='D') arr[1]-=1;
            if(moves[i]=='R') arr[0]+=1;
            if(moves[i]=='L') arr[0]-=1;
       }

       if(arr[0]==0 && arr[1]==0) return true;
       else return false;
    }
};