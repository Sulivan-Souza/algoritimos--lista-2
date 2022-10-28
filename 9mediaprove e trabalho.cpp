#include <stdio.h>

int main()
{
 // Declaração das variáveis
 float MF,MP,MT,ME;

 // Entrada de Dados
 printf("\n Informe a media das provas: ");
 scanf("%f",&MP);
 printf("\n Informe a media dos trabalhos: ");
 scanf("%f",&MT);
 printf("\n Informe a media dos exercícios: ");
 scanf("%f",&ME);

 //Processamento dos dados
 MF = (0.7 * MP) + (0.2 * MT)+ (0.1 * ME);

 // Visualização do resultado
 printf("\n Media Final-MF = %.1f\n",MF);

 return 0;

}
