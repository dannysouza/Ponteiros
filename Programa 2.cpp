#include<stdio.h>
#include<stdlib.h>

float Despesas(float *s);
float Receitas(float *s);

int main()
{
	int op; float salario = 880, gastos, ganhos;
	printf (" -- Despesas e Receitas mensais -- \n\n");
	do
	{
		printf ("Inserir despesas (1), receitas (2) ou encerrar (3)?");
		scanf ("%d", &op);
		if (op == 1)
		{
			gastos = Despesas(&salario);
		}
		else 
		{
			if (op == 2)
			{
				ganhos = Receitas(&salario);
			}
			else 
			{
				if (op == 3)
				{
					printf ("Programa encerrado. \n");	
				}	
				else
				{
					printf ("Opcao invalida. \n");
				} 	
			}
		}
	}while(op != 3);
	
	printf ("\nTotal de gastos: R$ %5.2f", gastos);
	printf ("\nTotal de ganhos: R$ %5.2f", ganhos);
	printf ("\nSeu salario atual e: R$ %5.2f \n\n", salario);
	
	system("pause");
	return 0;
}

float Despesas(float *s)
{
	float vet[3], soma=0; int i=0;
	printf ("\nDespesa com transportes: ");
	scanf ("%f", &vet[i]);
	i++;
	printf ("\nDespesa com alimentacao: ");
	scanf ("%f", &vet[i]);
	i++;
	printf ("\nDespesa com suborno em Progamacao II: ");
	scanf ("%f", &vet[i]);
	for (i=0; i<3; i++)
	{
		soma += vet[i];
	}
	(*s) -= soma;
	return soma;
}

float Receitas(float *s)
{
	float ganho=0, x;
	printf ("\nReceita de horas extra: ");
	scanf ("%f", &x);
	ganho += x;
	printf ("\nReceita de trabalho informal: ");
	scanf ("%f", &x);
	ganho += x;
	printf ("\nReceita pelos Programas: ");
	scanf ("%f", &x);
	ganho += x;
	(*s) += ganho;
	return ganho;
}




