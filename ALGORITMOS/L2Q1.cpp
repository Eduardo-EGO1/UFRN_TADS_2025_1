/* 1. Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três
lados diferentes. */


#include <iostream>
using namespace std;
int main () {
	int X, Y, Z; // Criando os 3 valores
	cout << "Insira aqui 3 valores e vamos verificar se eles podem formar um triangulo e seu tipo: ";
	cin >> X >> Y >> Z;
	bool triangulo; 
	if (X < Y + Z && Y < X + Z && Z < X + Y) { // Verificando se é possível formar um triângulo com as medidas passadas
		triangulo = true;
	}
	if (!triangulo) {
		cout << "\n\tCom essas medidas eh impossivel formar um triangulo"; // Retorno por ser impossível formar um triângulo
	}
	 // Foi possível formar um triângulo, agora vamos verificar qual o tipo dele
	if (X == Y && X == Z) {
		cout << "\n\tCom essas medidas temos um Triangulo Equilatero";
	} else if (X == Y || X == Z || Y == Z) {
		cout << "\n\tCom essas medidas temos um Triangulo Isosceles";
	} else if (triangulo == true && X != Y && X != Z && Y != Z) { // Aqui temos que verificar se é possível formar um triângulo, pois caso não seja um triângulo ele exibirá a mensagem de Triângulo Escaleno ainda assim
		cout << "\n\tCom essas medidas temos um Triangulo Escaleno";
	}
	return 0;
}
