#include <stdio.h>



const int weight_q=25;
const int weight_mt_exam=20;
const int weight_f_exam=25;
const int weight_project=20;
const int weight_recitaion=10;
int main()
{
	int description;
	float Q, mt_exam, f_exam, project, recitation;
	float actualgrade, transmutedgrade, gradepoint;
	
	printf("Enter grade for Quizzes: ");
	scanf("%f", &Q);
	printf("Enter grade for Midterm Exam: ");
	scanf("%f", &mt_exam);
	printf("Enter grade for Final Exam: ");
	scanf("%f", &f_exam);
	printf("Enter grdae for Project: ");
	scanf("%f", &project);
	printf("Enter grade for Recitation: ");
	scanf("%f", &recitation);

		
	printf("\n\n-------------------------------------------------------\n");
	printf("REQUIREMENT\t\t\tGRADE\t\tWEIGHT\n");
	printf("-------------------------------------------------------\n");
	printf("Quizzes\t\t\t\t%.2f\t\t%d%%\n", Q, weight_q);
	printf("Midterm Exam\t\t\t%.2f\t\t%d%%\n", mt_exam, weight_mt_exam);
	printf("Final Exam\t\t\t%.2f\t\t%d%%\n", f_exam, weight_f_exam);
	printf("Project\t\t\t\t%.2f\t\t%d%%\n", project, weight_project);
	printf("Recitation\t\t\t%.2f\t\t%d%%\n\n", recitation, weight_recitaion);
	
	actualgrade= (Q*.25)+(mt_exam*.20)+(f_exam*.25)+(project*.20)+(recitation*.10);
	printf("Actual Grade:\t\t\t%.2f\n", actualgrade);
	
	if(actualgrade >= 60)
	{
		transmutedgrade= 75 + (actualgrade-60) / 1.6;
	}
	else
	{
		transmutedgrade= 60 + actualgrade / 4;
	}
	printf("Transmuted Grade:\t\t%.0f\n", transmutedgrade);
	
	if(transmutedgrade >= 95 && transmutedgrade <=100)
	{
		gradepoint= 1.00;
		description = 1;
	}
	else if(transmutedgrade >= 91 && transmutedgrade <=94)
	{
		gradepoint= 1.25;
		description = 2;
	}
	else if(transmutedgrade >= 88 && transmutedgrade <=90)
	{
		gradepoint= 1.50;
		description = 3;
	}
	else if(transmutedgrade >= 86 && transmutedgrade <=87)
	{
		gradepoint= 1.75;
		description = 4;
	}
	else if(transmutedgrade >= 84 && transmutedgrade <=85)
	{
		gradepoint= 2.00;
		description = 5;
	}
	else if(transmutedgrade >= 82 && transmutedgrade <=83)
	{
		gradepoint= 2.25;
		description = 6;
	}
	else if(transmutedgrade >= 79 && transmutedgrade <=81)
	{
		gradepoint= 2.50;
		description = 7;
	}
	else if(transmutedgrade >= 77 && transmutedgrade <=78)
	{
		gradepoint= 2.75;
		description = 8;
	}
	else if(transmutedgrade >= 75 && transmutedgrade <=76)
	{
		gradepoint= 3.00;
		description = 9;
	}
	else if(transmutedgrade >= 60 && transmutedgrade <=74)
	{
		gradepoint= 5.00;
		description = 10;
	}
	printf("Grade Point:\t\t\t%.2f\n", gradepoint);
	
	
	
	switch  (description)
	{
		case 1: printf("Description:\t\t\tOutstanding");
				break;
		case 2: printf("Description:\t\t\tSuperior");
				break;
		case 3: printf("Description:\t\t\tVery Satisfactory");
				break;
		case 4: printf("Description:\t\t\tVery Satisfactory");
				break;
		case 5: printf("Description:\t\t\tSatisfactory");
				break;
		case 6: printf("Description:\t\t\tSatisfactory");
				break;
		case 7: printf("Description:\t\t\tFair");
				break;
		case 8: printf("Description:\t\t\tFair");
				break;
		case 9: printf("Description:\t\t\tFair");
				break;
		case 10: printf("Description:\t\t\tFailure");
				break;
	}
	return 0;
}
