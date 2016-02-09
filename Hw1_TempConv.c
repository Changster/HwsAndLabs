#include <stdio.h>

//Fahrenheit to Celsius Program, by Chang Su
//2016.02.09

int main()
{

	float f, c;
	printf(" Fahrenheit \t  Celsius \n");
	printf(" ======================== \n");
	for (f= 0; f<=300; f+=10)
	{
		c = (5*(f-32))/9;
		printf("%8.2f %15.2f \n", f, c);
	}
	return 0;
}