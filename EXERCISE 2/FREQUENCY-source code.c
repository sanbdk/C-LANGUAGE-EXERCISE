#include <stdio.h>

int frequency(int ig, int digit)
{
    if ( ig < 0)
        ig *= -1;
    
    if (ig == 0)
    {
        return 0;
    }
    
    else if (ig % 10 == digit)
    {
        return 1 + frequency(ig/10, digit);
    }
    
	else if (ig % 10 != digit)
    {
        return frequency(ig/10, digit);
    }
}

int main()
{
    int ig;
    int digit;

    FILE *ifp, *ofp;
    ifp = fopen("integers.in", "rt");
    ofp = fopen("count1.out", "wt");

    printf("INTEGER\t\t\t0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 ");
    printf("\n----------------------------------------------------------------------");
    fprintf(ofp,"INTEGER\t\t\t0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 ");
    fprintf(ofp,"\n---------------------------------------------------------------------");

    while (fscanf(ifp, "%d", &ig) != EOF)
    {
        printf("\n");
        printf("%-21d", ig);
        fprintf(ofp, "\n");
        fprintf(ofp, "%-21d", ig);
    
    	for (digit = 0; digit <= 9; digit++)
    	{
        	fprintf(ofp, "%4d", frequency(ig, digit));
        	printf("%4d", frequency(ig, digit));
    		}
	}
    fclose(ofp);
    fclose(ifp);

    return 0;

    
}
