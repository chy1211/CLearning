#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e,i,s;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
				for(d=0;d<=9;d++)
			    {
				   for(e=0;e<=9;e++)
			        {
				       i=(a*10000+b*1000+c*100+d*10+e)*a;
				       s=b*100000+b*10000+b*1000+b*100+b*10+e;
				       if(i==s)
				       {
				       	printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
					   }
			        }
			    }
			}
		}
	}
}
