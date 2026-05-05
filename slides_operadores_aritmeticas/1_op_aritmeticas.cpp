/*
1) CRIE UM PROGRAMA QUE LEIA 2 NÚMEROS NA ENTRADA, E DEPOIS REALIZE TODAS AS
OPERAÇÕES ARITMÉTICAS POSSÍVEIS, COLCOANDO O RESULTADO DE CADA UMA DELAS 
NA SAÍDA DO PROGRAMA
*/

#include <iostream> //biblioteca
#include <cmath> //biblioteca matemática
#include <locale.h> //corrigir o portuguese

using namespace std;

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //correção de acentos

    //declaração de variáveis
    int n1, n2;
    int mult, div, resto, soma, sub; //inicialize a 0.
    
    //entradas de dados
    cout << "Digita os 2 números: ";
    cin >> n1 >> n2;

    //desenvolvimento     //saida de dados
    //multiplicação
    mult = n1 * n2;
    cout << "Multiplicação: " << mult << endl;

    //divisão
    div = n1/n2;
    cout << "Divisão: " << div << endl;

    //resto da divisão
    resto = n1%n2;
    cout << "Resto da Divisão: " << resto << endl;

    //soma
    soma = n1 + n2;
    cout << "Soma: " << soma << endl;

    //subtração
    sub = n1 - n2;
    cout << "Subtração: " << sub;

    return 0;
}