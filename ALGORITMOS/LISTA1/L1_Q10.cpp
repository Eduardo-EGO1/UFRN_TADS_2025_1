/*10. Leia dois valores reais para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e resto da divisão de A por B, apresentando ao final os resultados obtidos. Em
seguida leia dois valores lógicos C e D e efetue as operações de negação (de cada um dos
valores), conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos. */

#include <iostream>
using namespace std;

int main() { 
	double A, B;
	cout << "INSIRA UM NUMERO DO CONJUNTO REAL : ";
	cin >> A;
	cout << "\nINSIRA OUTRO NUMERO DO CONJUNTO REAL : ";
	cin >> B;
	int quociente = int(A/B);
	cout << "\nA + B = " << A+B << "\nA - B = " << A-B << "\nA * B = " << A*B << "\nA % B = " << A - (quociente * B);
	bool C, D;
	cout << "\n\nDIGITE 0 OU 1 PARA O OPERADOR LOGICO 'C' : ";
	cin >> C;
	cout << "\nDIGITE 0 OU 1 PARA O OPERADOR LOGICO 'D' : ";
	cin >> D;
	cout << "\nNAO C : " << (!C) << "\tC E D : " << (C && D) << "\tC OU D : " << (C || D) << "\nNAO D : " << (!D) << "\tD E C : " << (D && C) << "\tD OU C : " << (D||C);
}
