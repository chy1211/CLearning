#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,k,i,a,b,m,o,p,ans;
	m=1,a=1,b=1;
	printf("�п�J����N�BM�A�N��XC(N,K)=N!/(K!*(N-K)!)\n");
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	for(o=1;o<=k;o++)
	{
		b=b*o;
	}
	for(p=1;p<=(n-k);p++)
	{
		m=m*p;
	}
	ans=a/(b*m);
	printf("C(N,K)=%d\n",ans);
	system("pause");
}
