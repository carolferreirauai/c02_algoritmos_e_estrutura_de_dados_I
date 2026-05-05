/*
1050 - DDD
LEIA UM NÚMERO INTEIRO QUE REPRESENTA UM CÓDIGO DE DDD PARA DISCAGEM
INTERURBANA. EM SEGUIDA, INFORME À QUAL CODADE O DDD PERTENCE, CONSIDERANDO A
TABELA ABAIXO:

DDD   DESTINATION
61    BRASILIA
71    SALVADOR
11    SAO PAULO
21    RIO DE JANEIRO
32    JUIZ DE FORA
19    CAMPINAS
27    VITORIA
31    BELO HORIZONTE

SE A ENTRADA FOR QUALQUER OUTRO DDD QUE NÃO ESTEJA PRESENTE NA TABELA ACIMA, O
PROGRAMA DEVERÁ INFORMAR:
DDD NÃO CADASTRADO

ENTRADA: A ENTRADA CONSISTE DE UM ÚNICO VALOR INTEIRO.

SAIDA: IMPRIMA O NOME DA CIDADE CORRESPONDENTE AO DDD EXISTENTE NA ENTRADA. IMPRIMA
DDD NAO CADASTRADO CASO NÃO EXISTIR DDD CORRESPONDENTE AO NÚMERO DIGITADO.
*/

//biblioteca
#include <iostream>

using namespace std; //espaço

int main() //função principal
{
    //declaração de variaveis
    int ddd;

    //entrada de dados
    cin >> ddd;

    //desenvolvimento //saida de dados
    //estrutura de decisao dos ddd.
    if (ddd == 61) 
    {
        cout << "Brasilia" << endl;
    }
    else if (ddd == 71)
    {
        cout << "Salvador" << endl;
    } 
    else if (ddd == 11)
    {
        cout << "Sao Paulo" << endl;
    }
    else if (ddd == 21)
    {
        cout << "Rio de Janeiro" << endl;
    }
    else if (ddd == 32)
    {
        cout << "Juiz de Fora" << endl;
    }
    else if (ddd == 19)
    {
        cout << "Campinas" << endl;
    }
    else if (ddd == 27)
    {
        cout << "Vitoria" << endl;
    }
    else if (ddd == 31)
    {
        cout << "Belo Horizonte" << endl;
    }
    else
    {
        cout << "DDD nao cadastrado" << endl;
    } 

    return 0;
}