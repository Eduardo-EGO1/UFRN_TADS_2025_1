/*13. Leia os valores dos lados de um retângulo, calcule e escreva sua área*/

#include <iostream>
using namespace std;

int main() {
	int base, altura, area;
	cout << "DIGITE A ALTURA DO RETANGULO : ";
	cin >> altura;
	cout << "\nDIGITE A BASE DO RETANGULO : ";
	cin >> base;
	area = base * altura;
	cout << "\nA AREA DESSE RETANGULO EH DE : " << area;
	
}
