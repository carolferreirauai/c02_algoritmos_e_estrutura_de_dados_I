/* 
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA VÁRIOS NÚMEROS E MOSTRE A SOMA
DELES.
A ENTRADA DE DADOS CONSISTE DE VÁRIOS NÚMEROS INTEIROS, E
TERMINA COM O VALOR -1, QUE NÃO DEVE SER CONSIDERADO NA
SOMA.
*/

//biblioteca
#include <iostream>

using namespace std; //espaços

int main() //função principal
{
    //declaração de variáveis
    int numeros;//numeros
    int soma = 0;

    //entrada de dados
    cin >> numeros; //lê o primeiro número antes do while

    //desenvolvimento
    while (numeros != -1) //repete até o user digitar -1
    {
        soma += numeros; //acumula o número na soma
        cin >> numeros; //lê o próximo número.
    }

    //saida de dados
    cout << soma << endl;

    return 0;
}