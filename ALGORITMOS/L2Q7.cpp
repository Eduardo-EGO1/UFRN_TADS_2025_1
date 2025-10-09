// O cardápio de uma lanchonete é o seguinte:
// Sanduíche
// Código Descrição Preço Unitário
// 100 Cachorro quente 1,10
// 101 Baurú simples 1,30
// 102 Baurú com ovo 1,50
// 103 Hamburger 1,10
// 104 Cheesburger 1,30
// Bebida
// Código Descrição Preço Unitário
// 105 Refrigerante 1,00
// 106 Suco 2,00
// 107 Nescau 1,50
// Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
// de cada um e calcule o valor a ser pago por aquele lanche. 

#include <iostream>
using namespace std;
int main() {
    int comida, bebida, qtdC, qtdB;
    float precoC, precoB, total;
    cout << "\nDigite o codigo da sua comida : ";  
    cin >> comida;
        switch (comida) {
        case 100: precoC = 1.10;
        break;
        case 101: precoC = 1.30;
        break;
        case 102: precoC =  1.50;
        break;
        case 103: precoC = 1.10;
        break;
        case 104: precoC = 1.30;
    }
    cout << "\nQual a quantidade desejada? ";
    cin >> qtdC;
    cout << "\nAgora Digite o codigo da sua bebida: ";
    cin >> bebida;
    switch (bebida) {
        case 105: precoB = 1;
        break;
        case 106: precoB = 2;
        break;
        case 107: precoB = 1.50;
        break;
    }
    cout << "\nQual a quantidade desejada? ";
    cin >> qtdB;
    total = (precoC * qtdC) + (precoB * qtdB);
    cout << "\nO total do seu pedido foi de : R$"  << total << endl;
    system("pause");
}