#include <iostream>///IO字串外掛
#include <string>
using namespace std;///使用命名空間Std
int main()
{
    string a,ans;///c++的字串
    cin >> a;///讀入字串
    ///倒過來的迴圈
    for(int i=a.length()-1;i>=0;i--){
        ans +=a[i];///把字母倒過來,放入答案
    }
    cout << a << '+' << stoi(ans) << '=';
    cout << stoi(a)+stoi(ans)<< endl;
}
