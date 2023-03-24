#include<stdio.h>
main()
{
	int a=1,n;
	printf("enter number for table=");
	scanf("%d",&n);
	
	while(a<=10)
	{
		printf("%dx%d=%d\n",n,a,n*a);
		a++;
	}
}
