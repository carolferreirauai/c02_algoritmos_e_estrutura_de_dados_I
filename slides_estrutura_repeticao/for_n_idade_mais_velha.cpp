/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO N.
DEPOIS, O PROGRAMA DEVE LER A IDADE DE N PESSOAS E CALCULAR
A IDADE DA PESSOA MAIS VELHA
*/

//biblioteca
#include <iostream>

using namespace std; //espaços

int main() //função principal
{
    //declaração de variaveis
    int n; //quantidade
    int idades; //idades
    int idademaisvelha = 0; //a idade mais velha

    //entrada de dados
    cin >> n; //lê quantidade de pessoa

    //desenvolvimento
    for (int i = 0; i < n; i++)
    {
        cin >> idades; //idade da pessoa atual

        if (idades > idademaisvelha) //verifica se a idade atual é maior que as idades inserida
        {
            idademaisvelha = idades; //atualizar a maior idade
        }
    }

    //saida de dados
    cout << "Idade mais velha: " << idademaisvelha << endl;
    return 0;
}