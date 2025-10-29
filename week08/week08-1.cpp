///week08-1.cpp
///3370 smallest number with all set bits
class Solution {
public:
    int smallestNumber(int n) {
        int N =0;
        while(n>0){
            n=n/2;
            N++;
        }
        cout << "瞷祇瞷N琌碭计㎡"<<N <<"计\n";
        int ans =0;///材˙ ノ癹伴 舱程ぃ常琌1秈n计
        for(int i=0;i<N;i++){
            ans=ans*2+1;
        }
        return ans;

    }
};
