#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,n,m,z,ans;
	a=1;
	b=1;
	ans=0;
	printf("N�Ӫ��~�DM��,�п�JN�PM�C");
	scanf("%d,%d",&n,&m);
	z=n-m;
    for (n=n;n>=1;n--)
    {
    	a=a*n;
	} 
	for(z=z;z>=1;z--)
	{
		b=b*z;
	}
	ans=a/b;
	printf("�@��%d�رƦC",ans);
}
