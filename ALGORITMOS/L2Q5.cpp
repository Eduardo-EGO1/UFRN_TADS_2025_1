/* Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
C�DIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30% 
*/


#include <iostream>
using namespace std;
int main() {
	int cargo;
	double salario;
	double aumento;
	cout << "Vamos calcular seu aumento, digite o CODIGO do seu cargo e o valor atual do seu SALARIO  :  ";
	cin >> cargo >> salario;
	if (cargo == 101) {
		aumento = salario * 1.1;
	}
	else if (cargo == 102) {
		aumento = salario * 1.2;
	}
	else if (cargo == 103) {
		aumento = salario * 1.3;
	}
	else {
		aumento = salario * 1.4;
	}
	cout << "\nSeu salario antigo era: " << salario << "\nSeu novo salario agora eh : " << aumento << "\nA diferenca entre seu antigo salario e o atual eh : " << aumento - salario;
	return 0;
}
