///week03-3a.cpp
///Leetcode 1822. sign of the product of an array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;///1���W����� �N��M�ܦ������
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans*=+1;
            if(nums[i]<0) ans*=-1;
            if(nums[i]==0) ans*=0;
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
