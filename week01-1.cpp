//Leedcode �ǲ߭p�e �j�����w�bhaystack���needle
//28.Find the index of the First Occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj�� ��Ҧ��i�઺��m ����L�@��
        //ex, sadbutsad�����L �n��sad
        //i=0    sad ��haystack�ūe��n�Ӧr��
        //i=1      sad
        //i=2          sad
        int H=haystack.length(),N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N) == needle)return i;
            //�qI�}�l �ťXN�Ӧr��

        }
        return -1;//�S��쵪�� �^��-1�N����
    }
};
