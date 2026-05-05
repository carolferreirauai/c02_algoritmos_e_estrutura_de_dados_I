/*
5) CRIE UM PROGRAMA QUE LEIA OS VALORES (0 A 100) DA PROVA, EXERCÍCIOS, PROJETO E 
CALCULE A NOTA RESULTANTE NP1 DA MATÉRIA DE ALGORITMOS.
*/
#include <iostream> //biblioteca
#include <cmath> //biblioteca matemática
#include <locale.h> //corrigir acentos
#include <iomanip> //limitar casa decimais

using namespace std; //espaço

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //corrigir acentos

    //declaração de variaveis
    float np1;
    float p;
    float ex;
    float pj;

    //entrada de dados
    cout << "Nota da Prova: ";
    cin >> p;
    cout << "Nota da Exercícios: ";
    cin >> ex;
    cout << "Nota da Projeto: ";
    cin >> pj;

    //desenvolvimento
    np1 = (0.8 * p) + 0.2 * sqrt(ex * pj);

    //saida de dados
    cout << fixed << setprecision(2);
    cout << "NP1: " << np1 << endl;

    return 0;
}
