#include <stdio.h>
#include <string.h>
#define CAPACITY 100



typedef struct
{
	char name[CAPACITY];
	int id_number;
	int age;
	char gender;
	
}student;

void sepsort(student group[], student male[], student female[], int num)
{
	int i, j, k = 0, l = 0;
	int total[2] = {0,0};	
	student holder;
	FILE *ofp;
	
	ofp = fopen("sorted.txt", "wt");
	
// for grouping
	for(i = 0; i < num; i++)
	{
		if(group[i].gender == 'M')
		{
			
			male[k] = group[i];
			k++;
			total[0] += 1;
		}
		else if(group[i].gender == 'F')
		{

			female[l] = group[i];
			l++;
			total[1] += 1;
		}
	}
// for sorting	
	for(i = 0; i < total[0] - 1; i++)
		for(j = i + 1; j < total[0]; j++)
		{
			if (strcmp(male[i].name, male[j].name) > 0)
			{
				holder = male[i];
				male[i] = male[j];
				male[j] = holder;
			}
				
		}
// printing in screen		
	printf("NAME\t\tID#\tAGE\n");
	printf("-------------------------------------------------\n");
	printf("MALE:\n");
		
	for(i = 0; i < total[0]; i++)
	{
		if (strlen(male[i].name) >= 8)
			printf("%s\t%02d\t%02d\n", male[i].name, male[i].id_number, male[i].age);	
		else
			printf("%s\t\t%02d\t%02d\n", male[i].name, male[i].id_number, male[i].age);
	}
	for(i = 0; i < total[1] - 1; i++)
		for(j = i + 1; j < total[1]; j++)
		{
			if (strcmp(female[i].name, female[j].name) > 0)
			{
				holder = female[i];
				female[i] = female[j];
				female[j] = holder;	
			}		
		}
	printf("\nFEMALE:\n");	
	
	for(i = 0; i < total[1]; i++)
	{
		if (strlen(female[i].name) >= 8)
			printf("%s\t%02d\t%02d\n", female[i].name, female[i].id_number, female[i].age);	
		else
			printf("%s\t\t%02d\t%02d\n", female[i].name, female[i].id_number, female[i].age);
	}
// printing in file
	fprintf(ofp, "NAME\t\tID#\tAGE\n");
	fprintf(ofp, "-------------------------------------------------\n");	
	fprintf(ofp, "MALE:\n");
		
	for(i = 0; i < total[0]; i++)
	{
		if (strlen(male[i].name) >= 6)
			fprintf(ofp, "%s\t%02d\t%02d\n", male[i].name, male[i].id_number, male[i].age);	
		else
			fprintf(ofp, "%s\t\t%02d\t%02d\n", male[i].name, male[i].id_number, male[i].age);
	}
	
	fprintf(ofp, "\nFEMALE:\n");	
	
	for(i = 0; i < total[1]; i++)
	{
		if (strlen(female[i].name) >= 8)
			fprintf(ofp, "%s\t%02d\t%02d\n", female[i].name, female[i].id_number, female[i].age);	
		else
			fprintf(ofp, "%s\t\t%02d\t%02d\n", female[i].name, female[i].id_number, female[i].age);
	}
	
	fclose(ofp);
}


int main()
{
	int i, num;
	student group[CAPACITY], male[CAPACITY], female[CAPACITY];
	FILE *ifp;

	ifp = fopen("students.txt", "rt");
	
	fscanf(ifp, "%d", &num);
	
	for(i = 0; i < num; i++)
	{
		fscanf(ifp, "%s %d %d %c", group[i].name, &group[i].id_number, &group[i].age, &group[i].gender);			
	}
			
	sepsort(group, male, female, num);
	
	fclose(ifp);
	
	return 0;
}
