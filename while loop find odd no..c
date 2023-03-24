#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	while(a<=n)
	{
		if(a%2==1)
		{
			printf("%d\n",a);
		}
		a++;
	}
}
