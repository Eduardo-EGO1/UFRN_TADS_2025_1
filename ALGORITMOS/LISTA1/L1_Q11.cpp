/*11. Leia tr�s notas e tr�s pesos, um para cada nota, calcule e escreva a m�dia aritm�tica e a m�dia
ponderada das tr�s notas e, nos dois casos, quanto falta para o aluno ser aprovado por m�dia
(considere a m�dia para aprova��o igual a 6,0).*/

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
