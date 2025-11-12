//week01-3.cpp
//SOLT108_BASE_003A
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int ans =0;
	for(int i=a;i<=b;i++){
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}
