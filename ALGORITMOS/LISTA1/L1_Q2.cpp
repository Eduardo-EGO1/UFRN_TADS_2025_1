/*2. Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações: número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira (contendo 10 cigarros).*/

#include <iostream>
using namespace std;

int main () {
	int anos, cigarros, carteiraPreco;
	int carteira = 10;
	cout << "\t\tVAMOS SIMULAR SEU GASTO COM CIGARROS AO LONGO DO TEMPO!! \n\nHA QUANTOS ANOS VOCE FUMA? \t";
	cin >> anos;
	cout <<"\nQUANTOS CIGARROS VOCE FUMA POR DIA? \t";
	cin >> cigarros;
	cout << "\nQUAL O PRECO DA CARTEIRA DE CIGARRO? \t";
	cin >> carteiraPreco;

	int cigarrosFumados = (anos * 360) * cigarros;
	int gastoTotal = (cigarrosFumados / carteira) * carteiraPreco; 
	cout << "SEU GASTO TOTAL COM CIGARRO EM REAIS FOI DE : R$" << cigarrosFumados;
	return 0;
}
