#include<stdio.h>
#include<stdlib.h>

#define N 5

float Media (float vet[]);

int main (void)
{
	int i;
	float vet[N], media;
	
	for (i=0; i<N; i++)
	{
		printf ("Numero: ");
		scanf ("%f", &vet[i]);
	}
	media = Media(vet);
	printf ("\n A media dos numeros e %5.2f \n\n", media);
	system ("pause");
	return 0;
}
	float Media(float vet[])
	{
		int i;
		float soma=0;
		for (i=0; i<N; i++)
		{
			soma += vet[i];
		}
		return (soma/N);
	}

