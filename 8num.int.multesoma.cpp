#include <stdio.h>

int main()
{
 // Variáveis
 int num1,num2,num_mult,num_soma,result_mult,result_soma;
 num_mult=5;
 num_soma=10;

 // Entrada de Dados
 printf("\n Informe o primeiro numero: ");
 scanf("%d",&num1);
 printf("\n Informe o segundo numero: ");
 scanf("%d",&num2);

 //Processamento dos dados
 result_mult=num1*num_mult;
 result_soma=num2+num_soma;

 // Exibição do resultado
 printf("\n Resposta1 -> %d*%d=%d\n",num1,num_mult,result_mult);
 printf("\n Resposta2 -> %d+%d=%d\n",num2,num_soma,result_soma);

 return 0;
}