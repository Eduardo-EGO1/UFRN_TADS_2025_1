/*12. Leia dois números inteiros quaisquer e escreva a soma entre os três sucessores do primeiro e os
dois antecessores do segundo.*/

#include <iostream>
using namespace std;

int main() {
	int n1, n2, soma1, soma2, total;
	
	cout << "DIGITE DOIS NUMEROS INTEIROS QUAISQUER : ";
	cin >> n1 >> n2;
	
	soma1 = (n1+1) + (n1+2) + (n1+3);
	soma2 = (n2-1) + (n2-2);
	total = soma1 + soma2;
	
	cout << "\nA SOMA DOS 3 SUCESSORES DO NUMERO 1 FOI : " << soma1; 
	cout << "\nA SOMA DOS 2 ANTECESSORES DO NUMERO 2 FOI : " << soma2;
	cout << "\nA SOMA TOTAL FOI  : " << total;
}
