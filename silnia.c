//Program liczacy n!
#include <stdio.h>


int main (){

	
	double n, silnia = 1.0;

	printf("Podaj liczbe n a oblicze n! : "); scanf("%lf", &n);


	for (int i = 1; i <= n; i++){
		silnia = silnia * i;
	}

	printf("wartosc n! wynosi: %lf \n", silnia);

	return 0;
}

