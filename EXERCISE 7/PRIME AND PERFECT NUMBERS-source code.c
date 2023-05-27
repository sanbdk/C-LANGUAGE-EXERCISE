#include <stdio.h>


int num;

int isPrime(num)
{
	int i=1, count=0;
	for(i = 1; num >= i; i++)
	{	
		if(num % i == 0)
			count++	;
	}
	return count;
	
}
int isPerfect(num)
{
	int i=1, sum=0;
	do
	{
		if(num%i==0)
			sum += i;	
		i++;	
	}while (num > i);
	return sum;
	
	
	
}

int main()
{
	
	printf("Enter a positive integer(Ctrl-Z to end): ");
	while( scanf("%d", &num) != EOF)
	{
		if(num>0)
		{
			isPrime(num);
			if (isPrime(num) == 2)
        	printf(" prime: YES\n");
        	else
	    	printf(" pime: NO\n");

	    	isPerfect(num);
			if (isPerfect(num) == num )
			printf(" perfect: YES\n");
			else
			printf(" perfect: NO\n");
		}
		else
		{
			printf("Invalid Input.\n");
			printf("Number must be positive or greater than 0.\n");
		}
		
		printf("\nEnter a positive integer(Ctrl-Z to end): ");
	}
	printf(" End of program.Thanks!");
	
	
	
	
	return 0;
}






