/* Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se �
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo. */

#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Digite um numero inteiro: ";
	cin >> n;
	if (n % 2 == 0){
		if (n > 100) {
		cout << "\n\tO numero eh par e maior que 100";
		} else if (n < 100) {
		cout << "\n\tO numero eh par e menor que 100";
		}	else {
			cout << "\n\tO numero eh par e igual a 100";
			}
	} else if (n % 2 != 0){
		if (n > 0) {
			cout << "\n\tO numero eh impar e positivo";
		} else if (n < 0 ) {
			cout << "\n\tO numero eh impar e negativo";
		}
	}
		
	return 0; 
}
