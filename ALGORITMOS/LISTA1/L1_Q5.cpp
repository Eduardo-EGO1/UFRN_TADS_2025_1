/*5. Leia o tempo de dura��o de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos. */

#include <iostream>
using namespace std;

int main() {
	int evento, horas, minutos, segundos;
	cout << "DIGITE O TEMPO DE DURACAO DE UM EVENTO EM SEGUNDOS : ";
	cin >> evento;
	
	horas = evento/3600; //convers�o direta da parte inteira de segundos por 3600 (valor de 1h)
	minutos = evento % 3600 / 60 ; //pegando a dura��o total de segundos e dividindo por 3600 (valor de 1h), e pegando o resto da divis�o (o que sobrou de minutos) e dividindo por 60 (quantidade de minutos x hora, n�o ultrapassando
	//assim os 60 minutos
	segundos = evento % 60; // o que sobrar na divis�o de segundos por 60 (quantidade de segundos x minuto) � o total de segundos.
	cout << "o tempo de duracao foi : " << horas << "h " << minutos << "m " << segundos << "s" ;
	return 0;
}
