#include<stdio.h>
#include<math.h>
float a, b, c, delta, pdelta;

int main()
{
	printf("Program oblicza pierwiastki funkcji kwadratowej \n");
	printf("o wzorze ax^2+bx+c=0\n");

	printf("\nWprowadz zmienna a: ");
	scanf("%f", &a);
	printf("\nWprowadz zmienna b: ");
	scanf("%f", &b);
	printf("\nWprowadz zmienna c: ");
	scanf("%f", &c);
	printf("\n\n");

	if (a !=0)
	{
		delta = b*b-(4*a*c);
		pdelta = sqrt(delta);
		printf("Delta dla funkcji kwadratowej jest rowna: %f",delta);
		printf("\n");

		if (delta > 0)
		{
			printf("Delta jest > 0. Istnieja dwa pierwiastki:\n");
			printf("x=%f oraz x=%f",-((b-pdelta)/(2*a)), -((b+pdelta)/(2*a)));
		}else if (delta = 0) {
			printf("Delta jest = 0. Istnieje jeden pierwiastek:\n");
			printf("x=%f",-(b/(2*a)));
		}else {
			printf("Delta jest < 0. Nie istnieja pierwiastki rownania.\n");}
	}else
	{
		printf("a = 0. Funkcja jest funkcja liniowa\n");
	}
}






