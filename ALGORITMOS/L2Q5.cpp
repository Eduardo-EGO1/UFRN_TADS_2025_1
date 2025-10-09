/* Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30% 
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
