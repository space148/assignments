#include<stdio.h>
main()
{
	int n,m=0,i,sum=0,temp,f=1;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		m=n%10;
		for(i=1;i<=m;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
		f=1;
		m=0;
	}
	if(temp==sum)
	printf("strong number");
	else
	printf("not a strong number");
}
