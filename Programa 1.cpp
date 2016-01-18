// Programa que calcula a média de N números através de uma função do tipo real

#include<stdio.h>
#include<stdlib.h>

#define N 5 // Definição do tamanho do vetor

float Media (float vet[]); // Declaração da função

int main (void)
{
	int i;
	float vet[N], media; 
	
	for (i=0; i<N; i++)
	{
		printf ("Numero: "); // Números para o cálculo da média 
		scanf ("%f", &vet[i]); // Leitura dos números e armazenamento no vetor de tamanho N
	}
	media = Media(vet); // Variável "media" recebe o retorno da função Media
	printf ("\n A media dos numeros e %5.2f \n\n", media); // Imprime o resultado
	system ("pause");
	return 0;
}
	float Media(float vet[]) // Função Media
	{
		int i; // Variável local para percorrer o vetor
		float soma=0; 
		for (i=0; i<N; i++) // Laço para rcorrer o vetor
		{
			soma += vet[i]; // Soma dos valores guardados na variável "soma"
		}
		return (soma/N); // Retorna a soma dividido pelo tamanho do vetor (número de dados)
	}

