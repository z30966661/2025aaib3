///week02-4.cpp LeedCode 學習計畫第二題
///389. Find the Difference 找到兩個字串差哪個字母
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};///可以用桶子來裝字母
        for(int i=0;i<s.length();i++){
            char c=s[i];///取出字母
            A[c]++;///把字母 放進桶裡面
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];
            A[c]--;
            if(A[c]<0)return c;
        }
        return 0;
    }
};
