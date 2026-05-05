/*
EXERCÍCIO 1

FAÇA UM PROGRAMA QUE LEIA AS NOTAS DE 5 ALUNOS E AS
ARMAZENE EM UM VETOR.

DEPOIS O PROGRAMA DEVE MOSTRAR A MÉDIA DA TURMA.
*/

//biblioteca
#include <iostream>
#include <cmath> //matematico
#include <iomanip>

using namespace std;

int main() //função principal
{
    //declaração de variveis
    float notas[5]; //notas vetor que armazena alunos
    float soma = 0; //soma, inicializa em 0.
    float media; //media da turma

    //entrada de dados
    //loop das notas
    for (int i = 0; i < 5; i++)
    {
        cin >> notas[i]; //ler as notas
        soma += notas[i]; //calcular a soma das notas
    }
    //desenvolvimento
    //calculo da media
    media = soma / 5;

    //saida de dados
    cout << fixed << setprecision(2);
    cout << "média da turma: " << media << endl;

    return 0;
}