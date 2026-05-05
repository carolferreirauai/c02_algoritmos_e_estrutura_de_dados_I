/*
1052 - MÊS
LEIA UM VALOR INTEIRO ENTRE 1 E 12, INCLUSIVE. CORREPONDENTE A ESTE VALOR, DEVE SER
APRESENTADO COMO RESPOSTA O MÊS DO ANO POR EXTENSO, EM INGLÊS, COM A PRIMEIRA 
LETRA MAIÚSCULA.

ENTRADA: A ENTRADA CONTÉM UM ÚNICO VALOR INTEIRO.

SAÍDA: IMPRIMA POR EXTENSO O NOME DOS MÊS CORRESPONDENTE AO NÚEMRO EXISTENTE NA 
ENTRADA, COM A PRIMEIRA LETRA EM MAIÚSCULA.
*/

//biblioteca
#include <iostream>

using namespace std; //espaços.

int main() //função principal
{
    //declaração de variaveis
    int mes; //mes

    //entrada de dados
    cin >> mes;

    //desenvolvimento //saida de dados
    if (mes == 1)
    {
        cout << "January" << endl;
    }
    else if (mes == 2)
    {
        cout << "February" << endl;
    }
    else if (mes == 3)
    {
        cout << "March" << endl;
    }
    else if (mes == 4)
    {
        cout << "April" << endl;
    }
    else if (mes == 5)
    {
        cout << "May" << endl;
    }
    else if (mes == 6)
    {
        cout << "June" << endl;
    }
    else if (mes == 7)
    {
        cout << "July" << endl;
    }
    else if (mes == 8)
    {
        cout << "August" << endl;
    }
    else if (mes == 9)
    {
        cout << "September" << endl;
    }
    else if (mes == 10)
    {
        cout << "October" << endl;
    }
    else if (mes == 11)
    {
        cout << "November" << endl;
    }
    else if (mes == 12)
    {
        cout << "December" << endl;
    }
    
    

    return 0;
}