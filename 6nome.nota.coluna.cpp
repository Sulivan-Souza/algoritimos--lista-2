#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    char nomes [3][30];// variavel para letra chamada nomes,char[3]linhas, [30]colunas
    float notas [3];
    int i;//variavel inteira

    for (i =0; i < 3; i++){   //for repeticao para rodar 3vezes,
        printf ("Digite nome e nota do estudante: ");
        scanf("%s%f" , &nomes[i], &notas[i]);
    }
    printf("\n\tNome\tNotas\n");
    for(i =0; i < 3; i ++)
        printf("\t%s\t%.2f\n" , nomes[i], notas[i]);//\t =tabulacao

    return 0;
}
