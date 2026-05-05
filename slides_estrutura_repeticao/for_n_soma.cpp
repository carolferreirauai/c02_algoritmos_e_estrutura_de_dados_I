/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO N.
DEPOIS O PROGRAMA DEVE LER N NÚMEROS INTEIROS E MOSTRAR A 
SOMA DELES.
*/

//biblioteca
#include <iostream>

using namespace std; //espaços

int main() //função principal
{  
    //declaração de variaveis
    int n; //quantidade
    int soma = 0;
    int numero; 

    //entrada de dados
    cin >> n;
    
    //desenvolvimento
    for (int i = 0; i < n; i++)
    {
        cin >> numero;
        soma += numero; //soma de numeros
    }

    //saida de dados
    cout << soma << endl;

    return 0;
}