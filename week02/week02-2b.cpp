#include <iostream>///IO�r��~��
#include <string>
using namespace std;///�ϥΩR�W�Ŷ�Std
int main()
{
    string a,ans;///c++���r��
    cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j��
    for(int i=a.length()-1;i>=0;i--){
        ans +=a[i];///��r���˹L��,��J����
    }
    cout << a << '+' << stoi(ans) << '=';
    cout << stoi(a)+stoi(ans)<< endl;
}
