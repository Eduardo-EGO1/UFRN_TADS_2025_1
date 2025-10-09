/* 1. Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles
n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
� Equil�teros: tem os comprimentos dos tr�s lados iguais;
� Is�sceles: tem os comprimentos de dois lados iguais; � Escaleno: tem os comprimentos dos tr�s
lados diferentes. */


#include <iostream>
using namespace std;
int main () {
	int X, Y, Z; // Criando os 3 valores
	cout << "Insira aqui 3 valores e vamos verificar se eles podem formar um triangulo e seu tipo: ";
	cin >> X >> Y >> Z;
	bool triangulo; 
	if (X < Y + Z && Y < X + Z && Z < X + Y) { // Verificando se � poss�vel formar um tri�ngulo com as medidas passadas
		triangulo = true;
	}
	if (!triangulo) {
		cout << "\n\tCom essas medidas eh impossivel formar um triangulo"; // Retorno por ser imposs�vel formar um tri�ngulo
	}
	 // Foi poss�vel formar um tri�ngulo, agora vamos verificar qual o tipo dele
	if (X == Y && X == Z) {
		cout << "\n\tCom essas medidas temos um Triangulo Equilatero";
	} else if (X == Y || X == Z || Y == Z) {
		cout << "\n\tCom essas medidas temos um Triangulo Isosceles";
	} else if (triangulo == true && X != Y && X != Z && Y != Z) { // Aqui temos que verificar se � poss�vel formar um tri�ngulo, pois caso n�o seja um tri�ngulo ele exibir� a mensagem de Tri�ngulo Escaleno ainda assim
		cout << "\n\tCom essas medidas temos um Triangulo Escaleno";
	}
	return 0;
}
