#include <stdio.h>

main()
 {
   int n,i,factorial=1;
    
    printf("enter a number");
    scanf("%d",&n);
    for(i;n>=1;n--)
  
    {
        factorial=factorial*n;
        
    }
    printf("The Factorial of  is : %d",factorial);
return 0;
}
