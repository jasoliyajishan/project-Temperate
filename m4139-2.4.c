#include<stdio.h>

main()
{
	int first_digit,number,last_digit,sum;
	 printf("Enter a number: ");
    scanf("%d", &number);
     first_digit= number;
     while (first_digit >= 10) 
	 {
        first_digit/= 10;

    }
     last_digit = number % 10;

   
    sum = first_digit+ last_digit;
     printf("Sum of first and last_digit= %d\n", sum);

}
