/*8. Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o
valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter. */

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
