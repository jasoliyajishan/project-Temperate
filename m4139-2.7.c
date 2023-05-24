#include<stdio.h>

main()
{
	int x =0,y =1,z,n,i;
	

	printf("enter number : ");
	scanf("%d,",&n);
	
	printf("fibonnic number : %d,%d,",x,y);
	
	for(i = 3 ; i <= n ; i++)
	{ 
	  z=x+y;
	  printf("%d, ",z);
	  x=y;
	  y=z;
	}
}
