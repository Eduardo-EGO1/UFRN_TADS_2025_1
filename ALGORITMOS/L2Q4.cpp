/*4. Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago. */

#include <iostream>
using namespace std;
int main () {
	float precoC;
	int ano;
	float imposto;
	cout << "Digite o ano do seu carro e seu preco : \n";
	cin >> ano;
	cin >> precoC;
	if (ano < 1990) {
		imposto = precoC * 0.01;
		cout << "\n\tO valor do imposto a ser pago eh de : " << imposto;
	}
	else {
		imposto = precoC * 0.015;
		cout << "\n\tO valor do imposto a ser pago eh de: " << imposto;
	}
	return 0; 
}
