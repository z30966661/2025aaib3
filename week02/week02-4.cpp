///week02-4.cpp LeedCode �ǲ߭p�e�ĤG�D
///389. Find the Difference ����Ӧr��t���Ӧr��
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};///�i�H�α�l�Ӹ˦r��
        for(int i=0;i<s.length();i++){
            char c=s[i];///���X�r��
            A[c]++;///��r�� ��i��̭�
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];
            A[c]--;
            if(A[c]<0)return c;
        }
        return 0;
    }
};
