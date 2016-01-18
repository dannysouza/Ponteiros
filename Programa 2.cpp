// Programa para exemplificar o uso de fun��es, loops, vari�veis, vetores e ponteiros
// O usu�rio insere valores de receitas e despesas mensais e ao final s�o exibidos os totais de gastos, ganhos e o sal�rio atual

#include<stdio.h>
#include<stdlib.h>

float Despesas(float *s); 
float Receitas(float *s); // Declara��o das fun��es utilizando o ponteiro "s" como par�metro

int main()
{
	int op; float salario = 880, gastos, ganhos; // Declara��o de vari�veis
	printf (" -- Despesas e Receitas mensais -- \n\n");
	do
	{
		printf ("Inserir despesas (1), receitas (2) ou encerrar (3)?"); 
		scanf ("%d", &op); // Leitura do c�digo de opera��o inserido pelo usu�rio
		if (op == 1)
		{
			gastos = Despesas(&salario); // Vari�vel "gastos" recebe fun��o Despesas, passando como par�metro o endere�o da vari�vel local "sal�rio"
		}
		else 
		{
			if (op == 2)
			{
				ganhos = Receitas(&salario); // Vari�vel ganhos recebe fun��o Receitas, passando como par�metro o endere�o da vari�vel local "sal�rio"
			}
			else 
			{
				if (op == 3) // Op��o para encerrar o programa
				{
					printf ("Programa encerrado. \n");	
				}	
				else
				{
					printf ("Opcao invalida. \n"); // Valida��o do c�digo
				} 	
			}
		}
	}while(op != 3); // Condi��o de parada
	
	printf ("\nTotal de gastos: R$ %5.2f", gastos);
	printf ("\nTotal de ganhos: R$ %5.2f", ganhos);
	printf ("\nSeu salario atual e: R$ %5.2f \n\n", salario); // Impress�o dos valores  
	
	system("pause");
	return 0;
}

float Despesas(float *s) // Corpo da fun��o Despesas
{
	float vet[3], soma=0; int i=0; // Declara��o de vari�veis locais
	printf ("\nDespesa com transportes: "); 
	scanf ("%f", &vet[i]); // Valor lido e armazenado no ind�ce i do vetor vet
	i++; // Incremento de i 
	printf ("\nDespesa com alimentacao: ");
	scanf ("%f", &vet[i]);
	i++;
	printf ("\nDespesa com suborno em Progamacao II: ");
	scanf ("%f", &vet[i]);
	for (i=0; i<3; i++) // La�o para percorrer o vetor e somar seus valores
	{
		soma += vet[i]; // Total armazenado na vari�vel "soma"
	}
	(*s) -= soma; // O conte�do do ponteiro "s" (que aponta para a vari�vel salario) � decrementado do valor total de "soma" 
	return soma; // � retornado o valor de "soma"
}

float Receitas(float *s) // Corpo da fun��o Receitas
{
	float ganho=0, x; // Vari�veis locais
	printf ("\nReceita de horas extra: "); 
	scanf ("%f", &x); // Dado inserido � lido e armazenado na vari�vel "x"
	ganho += x; // Valor de x � somado ao valor da vari�vel ganho
	printf ("\nReceita de trabalho informal: ");
	scanf ("%f", &x);
	ganho += x;
	printf ("\nReceita pelos Programas: ");
	scanf ("%f", &x);
	ganho += x;
	(*s) += ganho; // O conte�do do ponteiro "s" � incrementado com o total da vari�vel "ganho"
	return ganho; // � retornado o valor da vari�vel "ganho"
}




