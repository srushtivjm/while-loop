#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter value of n=");
	scanf("%d",&n);
	while(a<=n)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n--;
	}
}
