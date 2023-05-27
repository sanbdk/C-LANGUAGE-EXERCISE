#include <stdio.h>
#include <math.h>
#define CAPACITY 100


int main()
{
	int num_elements, i;
	float x_mean, standev;
	float val[CAPACITY];
	FILE *ifp, *ofp;
	
	ifp = fopen("input.dat", "rt");
	ofp = fopen("output.dat", "wt");
	
	fscanf(ifp, "%d", &num_elements);
	
	for(i = 0; i < num_elements; i++)
	{
		fscanf(ifp, "%f", &val[i]);
	}
	
// Computing the mean
	
	for(i = 0; i < num_elements; i++)
	{
		x_mean += val[i];
	}
	
	x_mean /= num_elements;
	
	fprintf(ofp, "The mean is %.4f.\n", x_mean);
	printf("The mean is %.4f.\n", x_mean);
	
// Computing the standard deviation

	for(i = 0; i < num_elements; i++)
	{
		standev += pow(val[i] - x_mean, 2);	
	}	
	
	standev = sqrt(standev / (num_elements - 1));
	
	fprintf(ofp, "The standard deviation is %.4f.\n\n", standev);
	printf("The standard devition is %.4f.\n\n", standev);
	
	fprintf(ofp, "Table of differences between the data values and mean deviation.\n");
	printf("Table of differences between the data values and mean deviation.\n");
	
	fprintf(ofp, "Index\t\tData\t\t\tData-Mean\n");
	printf("Index\t\tData\t\t\tData-Mean\n");
	
	if(num_elements <= 10)
	{
		for(i = 0; i < num_elements; i++)
		{
		fprintf(ofp, "%d %14.2f %19.2f\n", i, val[i], val[i] - x_mean);
		printf("%d %18.2f %25.2f\n", i, val[i], val[i] - x_mean);
		}
	}
	else
	{
		for(i = 0; i < 10; i++)
		{
		fprintf(ofp, "%d %14.2f %20.2f\n", i, val[i], val[i] - x_mean);
		printf("%d %18.2f %25.2f\n", i, val[i], val[i] - x_mean);
		}
		for(i = 10; i < num_elements; i++)
		{
		fprintf(ofp, "%d %13.2f %20.2f\n", i, val[i], val[i] - x_mean);
		printf("%d %17.2f %25.2f\n", i, val[i], val[i] - x_mean);
		}
	}
	
	fclose(ifp);
	fclose(ofp);
	
	return 0;
}
