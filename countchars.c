#include<stdio.h>
main()
{
	char a[]="I am Dinesh@degree-clg";
	int i=0,lc=0,sc=0;
	while(a[i++]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		lc++;
		else if(a[i]>='A'&&a[i<='Z']);
		else
		sc++;
	}
	printf("lower case letters are %d",lc);
	printf("\nspl chars are %d",sc);
}
