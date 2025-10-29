///week08-5.cpp
///solt106_advance_005_c
#include <iostream>
using namespace std;
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=0;i<b;i++){
	ans *=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
