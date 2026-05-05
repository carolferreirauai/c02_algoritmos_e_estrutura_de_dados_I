/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO N.
DEPOIS, O PROGRAMA DEVE LER A IDADE DE N PESSOAS E CALCULAR
A IDADE MÉDIA DO GRUPO.
*/

//biblioteca
#include <iostream>
#include <locale.h> //corregir o português

using namespace std; //espaço

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //correção de acentos

    //declaração de variaveis
    int n; //quantidade
    int idade; //idade das pessoas
    float media; //valor medio do grupo
    float soma = 0; //soma das idades

    //entrada de dados
    cin >> n; //quantidades
    
    //desenvolvimento
    for (int i = 0; i < n; i++)
    {
        cin >> idade; //entrada de dados da idade
        soma += idade; //soma = soma + idade, soma as idades
    }
    
    media = soma/n; //media das idades

    //saida de dados
    cout << "Idade média do grupo: " << media << endl;

    return 0;
}