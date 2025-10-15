///week06-1.cpp
///leedcode 學習計畫第四題 242. Valid Anagram
///給你兩個字串s,t判斷他們用的字母 是否都相同(可換順序)
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///先看字串的長度是否相同
        if(s.length()!=t.length())return false;///不同就失敗
        int R[26]={};///要有一個recycle回收桶 來分類我們的字母
        for(int i=0;i<s.length();i++){
            char c=s[i]-'a';
            R[c]++;
        }
        for(int i=0;i<t.length();i++){
            char c=t[i]-'a';
            R[c]--;
            if(R[c]<0)return false;
        }
        return true;
    }
};
