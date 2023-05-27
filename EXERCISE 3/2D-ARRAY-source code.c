#include <stdio.h>
#define CAPACITY 100


void transpose(int rows, int columns, int A[rows][columns])
{
	int i, j;
	for(i = 0; i < rows; i++)
		for(j = 0; j < columns; j++)
			A[j][i]= A[i][j];	
}
void matrix1(int rows, int columns, int A[][CAPACITY])
{
	int Rsum, Csum, i, j, allsum;
	int totalsum_r[CAPACITY];

	for(i = 0; i < rows; i++)
	{
		Rsum = 0;
		printf("\t\t");
		for(j = 0; j < columns; j++)
		{
			Rsum += A[i][j];
			printf("\t%3d ", A[i][j]);
		}
		printf("   | %2d", Rsum);
		printf("\n ");
	
	}
	
	printf("\t\t\t--------------------------------------------\n");
	printf("Sum-of-Column: \t");
	for (j = 0; j < columns; j++) 
	{
        Csum = 0;
        for (i = 0; i < rows; i++) 
		{
            Csum += A[i][j];
        }
        printf("\t%3d  ", Csum);
 	}

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
			allsum += A[i][j];
		
	}
	
	printf("  | %3d\n\n", allsum);

}
void matrix2(int rows, int columns, int A[][CAPACITY])
{
	int Rsum,Csum, i, j, allsum = 0;
	int totalsum_r[CAPACITY];
	for(i = 0; i < columns; i++)
	{
		Rsum = 0;
		printf("\t\t");
		for(j = 0; j < rows; j++)
		{
			Rsum += A[j][i];
			printf("\t%3d ", A[j][i]);
		}
		printf("   | %2d", Rsum);
		printf("\n ");
	
	}
	
		printf("\t\t\t--------------------------------------------\n");
	printf("Sum-of-Column: \t");
	
	for (j = 0; j < rows; j++) 
	{
        Csum = 0;
        for (i = 0; i < columns;i++) 
		{
            Csum += A[j][i];
        }
        printf("\t%3d  ", Csum);
 	}
	
	
	for(j = 0; j < rows; j++)
	{
		for(i = 0; i < columns; i++)
			allsum += A[j][i];
		
	}
	printf("  | %3d\n\n", allsum);
}


int main()
{
	int i, j, rows, columns;
	int A[CAPACITY][CAPACITY];
	
	FILE *ifp;
	ifp = fopen("matrix.in", "rt");
	
	fscanf(ifp, "%d", &rows);
	fscanf(ifp, "%d", &columns);
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < columns; j++)
			fscanf(ifp, "%d", &A[i][j]);	
		
	printf("\nOriginal Matrix:\n ");
	printf("\t\t\t\t\t\t\t\tSum-of-Row\n");
	
	matrix1(rows, columns, A);
	
	transpose(rows, columns, A);
	
	printf("Transpose matrix:\n ");
	printf("\t\t\t\t\t\t\tSum-of-Row\n");
	
	matrix2(rows, columns, A);
	
	return 0;
}
