#include <stdio.h>
#include <string.h>
#define CAPACITY 1000

void convert( char letter[CAPACITY], int k )
{
	char final;
	
	if (letter[k] >= 'A' && letter[k] <= 'Z' )
		letter[k] += ('a' - 'A');
		printf("%s", letter[k]);
	
	return;
		
}

int main( )
{
	int i, j, total, len1;
	char input;
	char *inPTR[CAPACITY];
	FILE *ifp;
	
	ifp = fopen("strings.txt", "rt");
	fscanf(ifp, "%d", &total);
	inPTR[] = &input; 
	
	
	for(i = 0; i < total; i++)
	{	
		fscanf(ifp, "%s", input[i]);
		printf("%s\n", input[i]);
	}

		
	
	return 0;	
	
	
	
	
}
