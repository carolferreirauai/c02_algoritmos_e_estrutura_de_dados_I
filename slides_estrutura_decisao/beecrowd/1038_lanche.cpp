/*
1038 - LANCHE
COM BASE NA TABELA ABAIXO, ESCREVA UM PROGRAMa QUE LEIA O CÓDIGO DE UM ITEM E A QUANTIDADE DESTE ITEM. 
A SEGUIR, CALCULE E MOSTRE O VALOR DA CONTA A PAGAR.

CÓDIDO   ESPECIFICAÇÃO     PREÇO
1        CACHORRO QUENTE   R$4,00
2        X-SALADA          R$4,50
3        X-BACON           R$5,00
4        TORRADA SIMPLES   R$2,00
5        REFRIGERANTES     R$1,50

ENTRADA: O ARQUIVOS DE ENTRADA CONTÉM DOIS VALORES INTEIROS CORRESPONDENTES AO CÓDIGO E Á QUANTIDADE DE UM ITEM
CONFORME TABELA ACIMA.

SAIDA: O ARQUIVO DE SAÍDA DEVE CONTER A MENSAGEM "TOTAL: R$" SEGUIDO PELO VALOR A SER PAGO, COM 2 CASAS APÓS O
PONTO DECIMAL
*/
//bibliotecas
#include <iostream>
#include <cmath> //matemáticos
#include <iomanip> //limitar casa decimais
#include <locale.h> //corrigir portugues

//espaços
using namespace std;

//função principal
int main()
{
    setlocale(LC_ALL, "Portuguese"); //correção de acentos

    //declaração de variaveis
    int codigo;
    int quantidade;
    double total;

    //entrada de dados
    cin >> codigo;
    cin >> quantidade;

    //desenvolvimento
    //cachorro quente
    if (codigo == 1)
    {
        total = quantidade * 4.0;
    }
    //x-salada
    else if (codigo == 2)
    {
        total = quantidade * 4.5;
    }
    //x-bacon
    else if (codigo == 3)
    {
        total = quantidade * 5.0;
    }
    //torrada simples
    else if (codigo == 4)
    {
        total = quantidade * 2.0;
    }
    //refrigerante
    else if (codigo == 5)
    {
        total = quantidade * 1.5;
    }

    //saida de dados
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}