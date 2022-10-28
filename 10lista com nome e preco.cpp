#include <iostream>

using namespace std;

int main() {

    float quant1, quant2, quant3;
    float total1, total2, total3, totalFinal;

    cout << "Produtos Disponiveis : " << endl;

    cout << "| Produto 1: Ketchup | Custo unitario: 1.50 reais " << endl;

    cout << "| Produto 2: Mostarda | Custo unitario: 3 reais " << endl;

    cout << "| Produto 3: Maionese | Custo unitario: 4.50 reais " << endl;

    cout << "Escolha a quantidade do primeiro produto" << endl;

    cin >> quant1;

    cout << "Escolha a quantidade do segundo produto" << endl;

    cin >> quant2;

    cout << "Escolha a quantidade do terceiro produto" << endl;

    cin >> quant3;

    total1 = quant1 * 1.50;

    total2 = quant2 * 3;

    total3 = quant3 * 4.50;

    totalFinal = total1 + total2 + total3;

    cout << "O custo total da sua compra e de cada um dos produtos eh : " << endl;

    cout << "Quantidade de Produto 1 (Ketchup): " << quant1 << " | Valor unitario: 1.50 | Subtotal: " << total1 << endl;

    cout << "Quantidade de Produto 2 (Mostarda): " << quant2 << " | Valor unitario: 3.00 | Subtotal: " << total2 << endl;

    cout << "Quantidade de Produto 3 (Maionese): " << quant3 << " | Valor unitario: 4.50 | Subtotal: " << total3 << endl;

    cout << "O preco total da sua compra ficou: " << totalFinal << endl;

}
