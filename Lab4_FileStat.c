#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int strCmpZ(char str, char str2, int i)
{
	//Loop through first n characters of the two
	//strings, return 1 if every char is the same
	while (str[i]==*str2[i])
	{
		//if reached space, break
		if(str[i] == ' ' || str2[i] == ' ')
			break;
		i++;

	}
	//if every character matches perfectly
	//then str[i] should be the space
	if (str[i] == ' ' && str2[i] == ' ')
		return 1;
	else
		return 0;
}*/
int strCmpZ(char str[], char str2[], int i)
{
	//Loop through first n characters of the two
	//strings, return 1 if every char is the same
	int k=0;
	while (str[i]==str2[k])
	{
		//if reached space, break
		if(str[i] == ' ' || str2[k] == ' ')
			break;
		i++;
		k++;
	}
	//if every character matches perfectly
	//then str[i] should be the space
	if (str[i] == ' ' && str2[k] == ' ')
		return 1;
	else
		return 0;
}


int main()
{
	//Opens a file
	//See the file txt on the bottom of this file
	FILE * fp = fopen("Lab2_CaesarCipher.c", "r");

	char str[200];
	int lineCount, spaceCount;
	int intCount, charCount, includeCount, returnCount;
	char ch;
	int i;

	//Read a string of length 200
	while (fgets(str, 199, fp))
	{
		//Read a string of length 200
		//Checks the following condition
		//until the end of file, \0
		for (i = 0; str[i] != '\0'; i++)
		{
			ch = str[i];
			if (ch == '\n')
				lineCount++;
			if (ch == ' ')
				spaceCount++;
			if (strCmpZ(ch, "int", i));
				intCount++;
			if (strCmpZ(ch, "char", i));
				charCount++;
			if (strCmpZ(ch, "include", i));
				includeCount++;
			if (strCmpZ(ch, "return", i));
				returnCount++;
		}
	}

	/* ALTERNATION
	for (ch = getc(fp); ch!=EOF; ch = getc(fp))
	{
		if (ch=='\n')
			lineCount++;
		if (ch==' ')
			spaceCount++;
	}*/

	fclose(fp);

	printf("The number of lines is: %d \n", lineCount);
	printf("The number of spaces is: %d \n", spaceCount);
	printf("The number of int is: %d \n", intCount);
	printf("The number of char is: %d \n", charCount);
	printf("The number of include is: %d \n", includeCount);
	printf("The number of return is: %d \n", returnCount);
	return 0;

	
}

/* EXAMPLE FROM ONLINE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(char *s1, char *s2);

int main()
{
	printf("\nstrcmp() = [%d]\n", mystrcmp("A","A"));
	printf("\nstrcmp() = [%d]\n", mystrcmp("A","B"));
	printf("\nstrcmp() = [%d]\n", mystrcmp("B","A"));
	return(0);
}

int mystrcmp(char *s1, char *s2)
{
	while (*s1==*s2)
	{
		if(*s1=='\0')
			return(1);
		s1++;
		s2++;
	}
	return 0;
}

*/



/* Lab2_CaesarCipher.c
#include <stdio.h>

int main()
{
	char bird[26];
	int i, shifts, length;
	char word;

	printf("Please input the message: ");
	scanf("%s", &bird);
	//length = arrayof(bird);

	printf("Please input the number of shifts: ");
	scanf("%d", &shifts);
	shifts = shifts%26;


	printf("The encrypted message: ");
	while (bird[i]!='\0')
	{
		word = bird[i] + shifts;

		if (word > 'z')
			word = word - 26;
		printf("%c", word);
		i++;
	}

	printf("\nThe decrypted message: %s", bird);
	return 0;
}
*/