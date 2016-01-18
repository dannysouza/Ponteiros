// Programa que calcula a m�dia de N n�meros atrav�s de uma fun��o do tipo real

#include<stdio.h>
#include<stdlib.h>

#define N 5 // Defini��o do tamanho do vetor

float Media (float vet[]); // Declara��o da fun��o

int main (void)
{
	int i;
	float vet[N], media; 
	
	for (i=0; i<N; i++)
	{
		printf ("Numero: "); // N�meros para o c�lculo da m�dia 
		scanf ("%f", &vet[i]); // Leitura dos n�meros e armazenamento no vetor de tamanho N
	}
	media = Media(vet); // Vari�vel "media" recebe o retorno da fun��o Media
	printf ("\n A media dos numeros e %5.2f \n\n", media); // Imprime o resultado
	system ("pause");
	return 0;
}
	float Media(float vet[]) // Fun��o Media
	{
		int i; // Vari�vel local para percorrer o vetor
		float soma=0; 
		for (i=0; i<N; i++) // La�o para rcorrer o vetor
		{
			soma += vet[i]; // Soma dos valores guardados na vari�vel "soma"
		}
		return (soma/N); // Retorna a soma dividido pelo tamanho do vetor (n�mero de dados)
	}

