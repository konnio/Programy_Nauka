/* sortowanie babelkowe */
#include<stdio.h>
int a[5], i=0, j=0, t;

int main (void)
{
	for(i; i<5; i++){
		printf("Podaj liczbe: ");
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++) printf("%d\n", a[i]);

	for(j; j<5; j++){
		for(i=0; i<4; i++){
			if(a[i]>a[i+1]){
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
		}
	}

	printf("\nPosortowane:\n");
	for(i=0; i<5; i++) printf("%d\n", a[i]);

//	system("PAUSE");
}


