#include<stdio.h>

main()
{
	int a=0,r,i,n;
	printf("enter value : ");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		

		r=n%10;
		a=a*10+r;
		n/=10;
		
		
		
	}
	if(i==a)
	{
		printf(" reverse number is a : %d\n",a);
		printf(" number is palidrome\n",i);
	
	}
	else
	{
		printf(" reverse number is a : %d\n",a);
		printf(" number is not palindrome\n",i);
	}
	
}
