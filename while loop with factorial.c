#include<stdio.h>
main()
{
	int fact=1,n;
	printf("Enter value =");
	scanf("%d",&n);
	
	while(n>=1)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial=%d",fact);
}
