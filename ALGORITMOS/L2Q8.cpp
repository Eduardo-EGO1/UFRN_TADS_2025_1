// 8. Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
//  mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. 

#include <iostream>
using namespace std;
int main() {
    int numeroO, soma = 0, cont, numero;
    char algoritmo;
    cout <<"\nDigite um numero inteiro : ";
    cin >> numeroO;
    cout << "\nDigite 'a' para saber os ultimos 10 antecessores ou 's' para os proximos 10 sucessores : ";
    cin >> algoritmo;
    numero = numeroO;
    if (algoritmo == 'a') {
        for (cont = 0; cont < 10; cont++){
            numero --;
            soma += numero; 
        }
        cout << "\nA soma dos antecessores do numero escolhido " << numero << " eh de : " << soma << endl;
    }   else if (algoritmo == 's'){
            for (cont = 0; cont < 10 ; cont++) {
                numero ++;
                soma += numero;
            }
        cout << "\nA soma dos proximos sucessores do numero escolhido " << numeroO << " eh de : " << soma << endl;

    }
   return 0;
}

