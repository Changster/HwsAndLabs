

#include <stdio.h>

int stringlength(char str[]);

int main()
{
	char str[] = "The quick brown fox";

	printf ("The lenght of the string \"%s\" is %d ", 
		str, stringlength(str));
}

int stringlength(char str[])
{
	int count = 0;
	int i;
	for (i=0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}