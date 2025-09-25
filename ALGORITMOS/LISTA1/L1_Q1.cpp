/* 1. Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias. */

#include <iostream>
using namespace std;

int main () {
	int idadeA, idadeM, idadeD;
	int idadeFinal;
	
	cout << "Digite sua idade em Anos, Meses e Dias (nessa ordem) : \nANOS : ";
	cin >> idadeA;
	cout << "\nMESES : ";
	cin >> idadeM;
	cout << "\nDIAS : ";
	cin >> idadeD;
	
	idadeFinal = (idadeA * 360) + (idadeM * 30) + idadeD;
	
	cout << "\n\nSUA IDADE EM DIAS EH : " << idadeFinal;
	return 0;
}
