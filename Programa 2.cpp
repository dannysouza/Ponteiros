// Programa para exemplificar o uso de funções, loops, variáveis, vetores e ponteiros
// O usuário insere valores de receitas e despesas mensais e ao final são exibidos os totais de gastos, ganhos e o salário atual

#include<stdio.h>
#include<stdlib.h>

float Despesas(float *s); 
float Receitas(float *s); // Declaração das funções utilizando o ponteiro "s" como parâmetro

int main()
{
	int op; float salario = 880, gastos, ganhos; // Declaração de variáveis
	printf (" -- Despesas e Receitas mensais -- \n\n");
	do
	{
		printf ("Inserir despesas (1), receitas (2) ou encerrar (3)?"); 
		scanf ("%d", &op); // Leitura do código de operação inserido pelo usuário
		if (op == 1)
		{
			gastos = Despesas(&salario); // Variável "gastos" recebe função Despesas, passando como parâmetro o endereço da variável local "salário"
		}
		else 
		{
			if (op == 2)
			{
				ganhos = Receitas(&salario); // Variável ganhos recebe função Receitas, passando como parâmetro o endereço da variável local "salário"
			}
			else 
			{
				if (op == 3) // Opção para encerrar o programa
				{
					printf ("Programa encerrado. \n");	
				}	
				else
				{
					printf ("Opcao invalida. \n"); // Validação do código
				} 	
			}
		}
	}while(op != 3); // Condição de parada
	
	printf ("\nTotal de gastos: R$ %5.2f", gastos);
	printf ("\nTotal de ganhos: R$ %5.2f", ganhos);
	printf ("\nSeu salario atual e: R$ %5.2f \n\n", salario); // Impressão dos valores  
	
	system("pause");
	return 0;
}

float Despesas(float *s) // Corpo da função Despesas
{
	float vet[3], soma=0; int i=0; // Declaração de variáveis locais
	printf ("\nDespesa com transportes: "); 
	scanf ("%f", &vet[i]); // Valor lido e armazenado no indíce i do vetor vet
	i++; // Incremento de i 
	printf ("\nDespesa com alimentacao: ");
	scanf ("%f", &vet[i]);
	i++;
	printf ("\nDespesa com suborno em Progamacao II: ");
	scanf ("%f", &vet[i]);
	for (i=0; i<3; i++) // Laço para percorrer o vetor e somar seus valores
	{
		soma += vet[i]; // Total armazenado na variável "soma"
	}
	(*s) -= soma; // O conteúdo do ponteiro "s" (que aponta para a variável salario) é decrementado do valor total de "soma" 
	return soma; // É retornado o valor de "soma"
}

float Receitas(float *s) // Corpo da função Receitas
{
	float ganho=0, x; // Variáveis locais
	printf ("\nReceita de horas extra: "); 
	scanf ("%f", &x); // Dado inserido é lido e armazenado na variável "x"
	ganho += x; // Valor de x é somado ao valor da variável ganho
	printf ("\nReceita de trabalho informal: ");
	scanf ("%f", &x);
	ganho += x;
	printf ("\nReceita pelos Programas: ");
	scanf ("%f", &x);
	ganho += x;
	(*s) += ganho; // O conteúdo do ponteiro "s" é incrementado com o total da variável "ganho"
	return ganho; // É retornado o valor da variável "ganho"
}




