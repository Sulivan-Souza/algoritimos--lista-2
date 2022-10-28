#include <iostream>

using namespace std;

int main()

{
 // Declara��o das vari�veis
    float temperatura_F,Celsius;

 // Entrada de dados (o valor da vari�vel � armazenado na mem�ria)
 printf("\n Informe a temperatura na escala Fahrenheit: ");
 scanf("%f",&temperatura_F);

 // Processamento dos dados
 Celsius=0.555555555*(temperatura_F-32);

 // Exibi��o do resultado
 printf("\n Temperatura em graus Celsius=%.2f\n",Celsius); /*.2f � para imprimir s� 2 casas ap�s a v�rgula*/
    return 0;
}
