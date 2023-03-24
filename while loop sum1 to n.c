#include<stdio.h>
main()
{
	int a=1,n,sum;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	while(a<=n)
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}
	printf("Sum all alements=%d",sum);
}
