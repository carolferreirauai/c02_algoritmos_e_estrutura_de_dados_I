/*
VAMOS PRATICAR?
RECRIE O PROGRMA QUE CALCULA A NOTA NP1 DA DISCIPLINA DE
ALGORITMOS. DESSA VEZ, CALCULE TAMBÉM A NP2 E FAÇA A 
MÉDIA ARITMÉTICA DAS DUAS NOTAS, APRESENTANDO NA SAÍDA SE O
ALUNO FOI APROVADO (NF >= 60) OU SE IRÁ FAZER A NP3.

NP1 = 0,8*P1 + 0,2*(EX1*PJ1)^0.5
NP2 = 0,8*P2 + 0,2*(EX2*PJ2)^0.5
*/

//biblioteca
#include <iostream>
#include <cmath> //matematico
#include <locale.h> //correção de Português

using namespace std; //espaço

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //corrigir os acentos

    //declaração de variaveis
    int np1, np2; //notas parciais
    int p1, p2; //provas
    int ex1, ex2; //exercicios
    int pj1, pj2; //projetos
    int nf = 0;

    //entrada de dados
    //np1
    cout << "Nota da Prova 1: ";
    cin >> p1;
    cout << "Nota do Exercícios 1: ";
    cin >> ex1;
    cout << "Nota do Projeto 1: ";
    cin >> pj1;

    //np2
    cout << "Nota da Prova 2: ";
    cin >> p2;
    cout << "Nota do Exercícios 2: ";
    cin >> ex2;
    cout << "Nota do Projeto 2: ";
    cin >> pj2;

    //desenvolvimento
    //cálculo das notas parciais
    np1 = (0.8 * p1) + (0.2 * sqrt(ex1 * pj1));
    cout << "Nota de NP1: " << np1 << endl;
    np2 = (0.8 * p2) + (0.2 * sqrt(ex2 * pj2));  
    cout << "Nota de NP2: " << np2 << endl;

    //médias da notas parciais
    nf = (np1 + np2) / 2;
    cout << "Nota final: " << nf << endl;

    //saida de dados
    //aprovado ou faz np3
    if (nf >= 60)
        cout << "APROVADO" << endl;
    else
        cout << "FAZER NP3" << endl;

    return 0;
}