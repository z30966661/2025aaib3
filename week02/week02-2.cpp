///week02-2.cpp c++
///�n��c++���r�� �ϹL��
#include <iostream>///IO�r��~��
using namespace dtd;///�ϥΩR�W�Ŷ�Std
int main()
{
    cout <<"�п�J�Ʀr:";
    string a,ans;///c++���r��
    cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j��
    for(int i=a.length()-1;i>=0;i--){
        ans +=a[i];///��r���˹L��,��J����
    }
    cout << a << ans;

}
