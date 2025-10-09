/*13 - Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela
abaixo:
CONSUMO (Km/l) MENSAGEM
Menor que 8 Venda o carro!
Entre 8 e 12 Econômico!
Maior que 12 Super econômico! */

#include <iostream>
using namespace std;

int main()
{
  int distancia = 0, consumo;
  float gasolina = 0;

  cout << "VAMOS CALCULAR O CONSUMO EM KM/L DO SEU CARRO, DIGITE O PERCURSO PERCORRIDO (EM KM) : ";
  cin >> distancia;
  cout << "\nAGORA DIGITE A QUANTIDADE DE LITROS QUE FOI CONSUMIDO NO TRAJETO : ";
  cin >> gasolina;

  consumo = distancia / gasolina;

  if (consumo < 0)
  {
    cout << "\nOS DADOS INSERIDOS FORAM INVALIDOS, FIM DO PROGRAMA!";
  }
  else
  {
    if (consumo < 8)
    {
      cout << "\nSEU CONSUMO FOI DE : " << consumo << "Km/l\tVENDA O CARRO !";
    }
    else if (consumo >= 8 && consumo < 12)
    {
      cout << "\nSEU CONSUMO FOI DE : " << consumo << "Km/l\tECONOMICO !";
    }
    else
    {
      cout << "\nSEU CONSUMO FOI DE : " << consumo << "Km/l\tSUPER ECONOMICO!";
    }
  }
}
