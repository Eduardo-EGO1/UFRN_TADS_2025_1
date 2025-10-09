// A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule
// e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
// Professor nível 1 R$ 12,00 por hora aula
// Professor nível 2 R$ 17,00 por hora aula
// Professor nível 3 R$ 25,00 por hora aula

#include <iostream>
using namespace std;
int main() {
    int nivel, horaAula, horas, salario;
    cout << "\nDigite aqui seu nivel de professor para calcularmos seu salario : ";
    cin >> nivel;
    switch (nivel){
        case 1: horaAula = 12;
        break;
        case 2: horaAula = 17;
        break;
        case 3: horaAula = 25;
        break;
    }
    cout << "\nDigite quantas horas foram trabalhadas : ";
    cin >> horas;
    salario = horas * horaAula;
    cout << "\nSeu salario esse mes foi de : R$" << salario << ",00" << endl;
    system("pause");
}