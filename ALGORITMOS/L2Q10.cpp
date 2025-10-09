/*10. A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia
das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media
entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado. */

#include <iostream>
#include <iomanip> //Biblioteca que permite definir a posi��o do ponto flutuante (float)
using namespace std;


int main() {
	
	float n1, n2, n3, resultado;
	int p1 = 2, p2 = 3, p3 = 5;
	cout << "VAMOS CALCULAR SUA MEDIA, PARA ISSO DIGITE SUAS 3 NOTAS\n";
	cin >> n1 >> n2 >> n3;
	if ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10) || (n3 < 0 || n3 > 10)) { // VERIFICANDO SE AS NOTAS RESPEITAM O INTERVALO, CASO N�O, ENCERRA O PROGRAMA
		cout << "\nDADOS INVALIDOS, DIGITE UM NUMERO DE 0 A 10";
		return 0;
	};
	
	resultado = ((n1 * p1) + (n2 *p2) + (n3 * p3)) / (p1 + p2 + p3);
	
	if (resultado > 0 && resultado < 3) {
		cout << "  =================== REPROVADO ===================  " <<  "\nSUA MEDIA FOI : " << setprecision(2) << resultado;
	} else if (resultado >=3 && resultado < 5) {
		cout << "  =================== RECUPERACAO ===================  " <<  "\nSUA MEDIA FOI : " << setprecision(2) << resultado;
	} else {
		cout << "  =================== REPROVADO ===================  " <<  "\nSUA MEDIA FOI : " << setprecision(2) << resultado;	
	}
}

