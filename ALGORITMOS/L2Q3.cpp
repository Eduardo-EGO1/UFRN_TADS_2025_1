/*3. Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7 */

#include <iostream>
using namespace std;
int main() {
	char genero;
	double altura;
	float pesoIdeal;
	cout << "Insira aqui sua altura e seu genero, sendo 'm' Masculino e 'f' Feminino : \n";
	cin >> genero;
	cin >> altura;
	if (genero == 'm') {
	pesoIdeal = (72.7 * altura) - 58;	
	cout << "\n\tO seu peso ideal eh : " << pesoIdeal;
	}
	else if (genero == 'f') {
		pesoIdeal = (62.1 * altura) - 44.7;
		
		cout << "\n\tO seu peso ideal eh : " << pesoIdeal;
	}
	else {
		cout << "\n\tO genero inserido foi invalido, tente novamente";
	}
	return 0;
}
