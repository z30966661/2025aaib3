///week06-4.cpp

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int N=nums.size();
        vector<int> combo(N,1);
        for(int i=1;i<N;i++){
            if(nums[i-1]<nums[i]) combo[i]=combo[i-1]+1;
        }
        for(int i=0;i<N-k;i++){
            if(combo[i]>=k && combo[i+k]>=k)return true;
        }
        return false;
    }
};
