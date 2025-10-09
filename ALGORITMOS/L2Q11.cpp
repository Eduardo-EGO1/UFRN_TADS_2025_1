/*11. Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique
e escreva a soma de todos os seus algarismos. Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 +
1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero
inv�lido�. */

#include <iostream>
using namespace std;

int main()
{
  int numero, soma = 0;

  cout << "Digite um numero:  ";
  cin >> numero;

  if (numero <= 0 || numero > 99999)
  {
    cout << "\nNumero invalido." << endl;
  }
  else
  {
    int n = numero;
    while (n > 0)
    {
      soma += n % 10;
      n = n / 10;
    }
    cout << "\nA soma dos algarismos do numero " << numero << " eh de : " << soma;
  }
}