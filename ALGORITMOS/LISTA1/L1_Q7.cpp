/*7. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

#include <iostream>
using namespace std;
int main() {
	float celsius;
	float fahrenheit;
	cout << "VAMOS CONVERTER UMA TEMPERATURA PARA FAHRENHEIT, DIGITE A TEMPERATURA (EM CELSIUS) : ";
	cin >> celsius;
	fahrenheit = (9*celsius+160) / 5;
	cout << "\n" << celsius <<"C (GRAUS CELSIUS) EQUIVALE A : " << fahrenheit << "F (GRAUS FAHRENHEIT)";
	return 0;
}
