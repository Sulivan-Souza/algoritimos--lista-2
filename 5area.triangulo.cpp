#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float A,B,H;

    cout << "Area do triangulo";
    cin >> A;
    cout << endl;

    cout << "Digite a Altura :";
    cin >> H;
    cout << endl;


    cout << "Digite a Base :";
    cin >> B;
    cout << endl;
    A = (B*H)/2;

    cout << "Area do Triangulo = "<<A;
    cout<< endl;



    return 0;
}
