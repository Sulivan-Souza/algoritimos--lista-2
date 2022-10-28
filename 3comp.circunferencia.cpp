#include <stdio.h>

int main()
{
	// Declara��o das vari�veis
	float raio, pi=3.14, C;

	// Entrada de dados
	printf("RAIO = ");
	scanf("%f", &raio);

	// C�lculo da �rea da circunfer�ncia
	C = pi * pi * raio;

	// Apresenta��o do resultado
	printf("Circuferencia = %.2f  \n", C);

	return 0;
}
