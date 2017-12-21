#include <stdio.h>
#include <stdbool.h>
#define N 10 //zapisy

void petla1 ()
{
	int s = 0, i, n;

	for(n = 0; n < 10; ++i)
	{
	s += i;
	}

}

void petla2 ()
{
	float A = 3.485e2, eps = 1.385434e-2;
	long k;

	while (A != 0)
	{
	A -= eps;
	++k;
	}
}

void petla3 ()
{
	unsigned char k = 5;
	do
	{
	k -= 2;
	} while (k != 0);
}

void wart_gdzie()
{
	bool dalej = true;
	int i, gdzie = -1;
	int szukany = 333;
	int tab[N] = {0, 1, 333};

	for (i = 0; i < N && dalej; ++i)
	{	
		if ( tab[i] == szukany )
		{
		dalej = false;
		}
	}
	gdzie = i;
	printf("Wartosc gdzie wynosi: %d" ,gdzie);

}

void main()
{

//petla1();
wart_gdzie();

}
