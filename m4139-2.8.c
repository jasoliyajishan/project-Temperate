#include<stdio.h>

main()
{
int n,i,t=0;
printf("enter value : ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if (n % i == 0)
    {
      t = 1;
      break;
    }
}
if (n == 1)
	{ 
	printf("1 is not prime.");
	}
  
    else 
	{
		if (t == 0)
		printf("%d is a prime number.", n);
		else
		printf("%d is not a prime number.", n);
	}
}
