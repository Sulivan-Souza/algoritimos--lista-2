#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, media, p1, p2, p3;    //declaracao de variaveis
    cout << fixed;
    cout.precision(2);                      //limitar casas decimais depois da virgula

    cout << "Digite a Nota 1 :";            //entrada de dados
    cin >> n1;
    cout << "Digite o peso   :";
    cin >> p1;
    cout << endl;

    cout << "Digite a Nota 2 :";
    cin >> n2;
    cout << "Digite o peso   :";
    cin >> p2;
    cout << endl;

    cout << "Digite a Nota 3 :";
    cin >> n3;
    cout << "Digite o peso   :";
    cin >> p3;
    cout << endl;

    media = ((n1*p1+n2*p2+n3*p3)/(p1+p2+p3));   //processamento do dados

    cout << "Media : " << media;
    cout << endl;

    cout << endl;

    return 0;
}
