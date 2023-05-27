#include <stdio.h>

void new_val(float *p1, int *p2, char *p3)
{
	printf("Input a new value for B: ");
	scanf("%f", p1); 
	printf("Input a new value for E: ");
	scanf("%d", p2);
	printf("Input a new value for A: ");
	scanf(" %c", p3);
	return;
}

int main()
{
	float B = 16.11;
	int E = 69;
	char A = 'S';
	
	float *Bptr = NULL;
	int *Eptr = NULL;
	char *Aptr = NULL;
	
	Bptr = &B;
	Eptr = &E;
	Aptr = &A;
	
	
	printf("Variable_name\t\tType\t\tAddress\t\t\tValue\n");
	printf("------------------------------------------------------------------------------\n");
	printf("B\t\t\tfloat\t\t%p\t%.2f\n", &B, B);
	printf("E\t\t\tint\t\t%p\t%d\n", &E, E);
	printf("A\t\t\tchar\t\t%p\t%c\n", &A, A);
	printf("Bptr\t\t\tfloat*\t\t%p\t%p\n", &Bptr, Bptr);
	printf("Eptr\t\t\tint*\t\t%p\t%p\n", &Eptr, Eptr);
	printf("Aptr\t\t\tchar*\t\t%p\t%p\n\n\n", &Aptr, Aptr);
	
	new_val(Bptr, Eptr, Aptr);


	printf("\nVariable_name\t\tType\t\tAddress\t\t\tNew_Value\n");
	printf("------------------------------------------------------------------------------\n");
	printf("B\t\t\tfloat\t\t%p\t%.2f\n", &B, B);
	printf("E\t\t\tint\t\t%p\t%d\n", &E, E);
	printf("A\t\t\tchar\t\t%p\t%c\n", &A, A);
	printf("Bptr\t\t\tfloat*\t\t%p\t%p\n", &Bptr, Bptr);
	printf("Eptr\t\t\tint*\t\t%p\t%p\n", &Eptr, Eptr);
	printf("Aptr\t\t\tchar*\t\t%p\t%p", &Aptr, Aptr);
	
	
	return 0;
	
}
