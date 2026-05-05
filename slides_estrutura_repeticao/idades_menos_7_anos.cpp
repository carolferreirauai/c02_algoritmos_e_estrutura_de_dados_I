/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA AS IDADES DE VÁRIAS PESSOAS, ATÉ 
QUE SEJA DIGITADA UMA IDADE NEGATIVA.
DEPOIS O PROGRAMA DEVE MOSTRAR O NÚMERO DE PESSOAS COM 
MENOS DE 7 ANOS.
*/

//biblioteca
#include <iostream>

using namespace std; //espaço

int main() //função principal
{
    //declaração de dados
    int idade; //idade das pessoas
    int contador = 0; //contador, iniciar o contador em 0

    //entrada de dados
    cin >> idade;

    while(idade >= 0) //verificar a idade, se for negativa o loop para
    {
        if (idade < 7) //pessoa menor de 7 anos.
        {
            contador++; //adicionar mais 1 no contador
        }
        
        //entrada de dados, se digita idade negativa, o loop quebra e vai para saida de dados
        cin >> idade;
    }

    //saida de dados
    cout << "total das pessoas com idade menor que 7: " << contador << endl;

    return 0;
}