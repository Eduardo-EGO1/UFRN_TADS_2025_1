// 9. Elabore um algoritmo que leia 3 números inteiros e uma ordem (a letra "c" para  crescente ou "d" decrescente) e
// escreva-os na ordem solicitada. 

#include <iostream>
using namespace std;

void ordenarNumero(int n1, int n2, int n3, char algoritmo);


int main() {
	
    int n1, n2, n3;
    char algoritmo;
    int maior, menor, meio;
    cout <<"\nDigite 3 numeros inteiros : ";
    cin >> n1 >> n2 >> n3;
    cout <<"\nInforme o algoritmo desejado, sendo 'c' para crescente ou 'd' para decrescente: ";
    cin >> algoritmo;
	ordenarNumero(n1, n2, n3, algoritmo);
	
	return 0;
}

void ordenarNumero(int n1, int n2, int n3, char algoritmo) {
    int maior, menor, meio;
	if (n1 > n2 && n1 > n3) {
        maior = n1;
    } else if (n2 > n1 && n2 > n3) {
        maior = n2;
    } else if (n3 > n1 && n3 > n2) {
        maior = n3;
    };
    if (n1 < n2 && n1 < n3) {
        menor = n1;
    } else if (n2 < n1 && n2 < n3) {
        menor = n2;
    } else if (n3 < n1 && n3 < n2) {
        menor = n3;
    };
    if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2))  {
        meio = n1;
    } else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)) {
        meio = n2;
    } else if ((n3 > n1 && n3 < n1) || (n3 > n2 && n3 < n1)) {
        meio = n3;
    }
    if (algoritmo == 'c' || algoritmo == 'C') {
        cout <<"\nA ordem dos numeros na ordem crescente eh: " << menor << ", " << meio << ", " << maior;
    } else if (algoritmo == 'd' || algoritmo == 'D') {
        cout <<"\nA ordem dos numeros na ordem decrescente eh: " << maior << ", " << meio << ", " << menor;
    }
}
