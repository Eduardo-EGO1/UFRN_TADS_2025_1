/*11. Leia três notas e três pesos, um para cada nota, calcule e escreva a média aritmética e a média
ponderada das três notas e, nos dois casos, quanto falta para o aluno ser aprovado por média
(considere a média para aprovação igual a 6,0).*/

#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3;
	float p1, p2, p3;
	float media = 6.0;
	
	cout << "DIGITE 3 NOTAS : ";
	cin >> n1 >> n2 >> n3;
	cout << "\nDIGITE 3 PESOS : ";
	cin >> p1 >> p2 >> p3;
	float aritmetica = (n1 + n2 + n3) / 3;
	float ponderada = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
	cout << "\nSUA NOTA COM A MEDIA ARITMETICA FOI : " << aritmetica << " E FALTA " << (media - aritmetica) << " PARA SER APROVADO!";
	cout << "\nSUA NOTA COM A MEDIA PONDERADA FOI : " << ponderada << " E FALTA " << (media - ponderada) << " PARA SER APROVADO!";
}
