#include <stdio.h>
#include <string.h>


void plural_form(char noun[])
{
	int length;
	char p1[] = "es";
	char p2[] = "s";

	char word1;
	char word2;
	
	length = strlen(noun);
	word1 = noun[length-1];
	word2 = noun[length-2];
	
	if( word1=='s' || word1=='x' || word1=='z')
	{
		strcat(noun, p1);
		printf("Plural form: %s", noun);
	}
	else if(word2=='s' && word1=='h' || word2=='c' && word1=='h')
	{
		strcat(noun, p1);
		printf("Plural form: %s", noun);
	}
	else if(word1=='y' && word2!='a' && word2!='e' && word2!='i' && word2!='o' && word2!='u') 
	{
		noun[length-1] = 'i';
		strcat(noun, p1);
		printf("Plural form: %s", noun);
	}
	else
	{
		strcat(noun, p2);
		printf("Plural form: %s", noun);
	}
	return;
}

int main ()
{
	char noun[100];
	
	printf("Input a singular noun: ");
	while ( scanf("%s", noun) != EOF)
	{
		plural_form(noun);
		printf("\n");
		printf("\nInput a singular noun: ");
			
	}
	printf("End of program.");
	
	return 0;	
}
