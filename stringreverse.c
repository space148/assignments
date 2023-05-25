#include<stdio.h>
main()
{
	char a[100];
	int len=0,i;
	printf("enter any string\n");
	gets(a);
	while(a[i++]!='\0')
	len++;
	printf("entered string:");
	puts(a);
	printf("reversed string:");
	for(i=len;i>=0;i--)
	putch(a[i]);
}
