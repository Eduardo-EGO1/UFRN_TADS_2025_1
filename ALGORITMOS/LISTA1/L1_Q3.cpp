/*3. Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das presta��es de
acordo com a quantidade de parcelas desejada pelo usu�rio. A loja est� vendendo seus produtos
a vista ou parcelado em at� 10 vezes sem juros.*/

#include <iostream>
using namespace std;

int main () {
	int compra, parcelas;
	cout << "==========  BEM VINDO A LOJA SUA MELHOR COMPRA ==========\n\nDIGITE O VALOR DE SUA COMPRA : R$";
	cin >> compra;
	cout << "\nDIGITE A QUANTIDADE DE PARCELAS DESEJADA : ";
	cin >> parcelas;
	
	int valorParcelas = compra / parcelas;
	cout << "O VALOR DE CADA PARCELA FICOU DE : R$" << valorParcelas;
	return 0;	
}
