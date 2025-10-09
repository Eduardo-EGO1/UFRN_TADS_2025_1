/* Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo. */

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
