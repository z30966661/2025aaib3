///week03-1.cpp
///c++�}�Cvector<int>
#include <iostream>///cin cout�n�Ϊ�
#include <vector>///���Ѫ��D�D �}�CVector
using namespace std;
int main()
{
    cout<<"�п�J4�ӼƦr:";
    vector<int> a;///���Y�ۦp���}�C
    int now;
    cin >> now;///�{�b��J�@�ӼƦr
    a.push_back(now);///����a���̫᭱
    cin >> now;///�{�b��J�@�ӼƦr
    a.push_back(now);///����a���̫᭱

    for(int i=0;i<a.size();i++){
        cout << a[i] << ' ';///�Ʀr�᭱���Ů�
    }
    cout << "�{�b�{���X�̭� �S���J�F99 88��ӼƦr,���G�O?\n";

    a.push_back(99);///����a���̫᭱
    a.push_back(88);///����a���̫᭱
    for(int i=0;i<a.size();i++){///�̷Ӱ}�C���j�p�ӦL
        cout << a[i] << ' ';///�Ʀr�᭱���Ů�
    }

}
