#include<stdio.h>

main()
{
  int n,count=0;
  printf("enter value=");
  scanf("%d",&n);
  while(n!=0 || count==0)
  {
  	n/=10;
  	count++;
  	
  	
  }
  printf("%d",count);
}
