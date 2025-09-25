/*8. Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. */

#include <iostream>
using namespace std;

int main () {
	float reais, dolar, cotacao;
	cout << "DIGITE O VALOR DA COTACAO DO DOLAR : R$";
	cin >> cotacao;
	cout << "\nQUANTOS DOLARES DESEJA CONVERTER? ";
	cin >> dolar;
	reais = dolar * cotacao;
	cout << "\nUS$" << dolar << " EQUIVALE A R$" << reais;
	return 0; 
}
