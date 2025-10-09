/*12. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include <iostream>
using namespace std;

int main () {
  int idade, tempo;

  cout << "VAMOS VERIFICAR SE O FUNCIONARIO PODE OU NAO SE APOSENTAR. \nDIGITE SUA IDADE : ";
  cin >> idade;
  cout << "\nAGORA DIGITE O TEMPO DE SERVICO (EM ANOS) : ";
  cin >> tempo;

  if ((idade >= 65) || (tempo >= 30) || (idade >= 60 && tempo >= 25)) {
    cout << "\nO FUNCIONARIO TEM O NECESSARIO PARA SE APOSENTAR!!";
  }
  else {
    cout << "\nO FUNCIONARIO NAO TEM O NECESSARIO PARA SE APOSENTAR!!";
  }
}