/*4. Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número.*/

#include <iostream>
using namespace std;

int main () {
	
	int numero;
	float percentual;
	cout << "DIGITE UM NUMERO INTEIRO QUALQUER : "; 
	cin >> numero;
	cout << "\nDIGITE UM VALOR PERCENTUAL QUALQUER : ";
	cin >> percentual;
	float result = (percentual/100) * numero;
	cout << "\nO PERCENTUAL (" << percentual << "%) DE " << numero << " EH : " << result;
	return 0;	
}
