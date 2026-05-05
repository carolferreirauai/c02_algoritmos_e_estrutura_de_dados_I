/*
EXERCICIO 2

FAÇA UM PROGRAMA QUE LEIA AS NOTAS DE 5 ALUNOS E AS
ARMAZENA EM UM VETOR.

DEPOIS O PROGRAMA DEVE MOSTRAR A NOTA MAIS ALTA DA TURMA.
*/

//biblioteca
#include <iostream>

using namespace std;

int main() //função principal
{   
    //declaração de variaveis
    float notas[5]; //nota, vetor que armazena 5 alunos
    float nota_mais_alta; //nota mais alta da turma
    
    //entrada de dados
    for (int i = 0; i < 5; i++) 
    {
        cin >> notas[i]; //ler as notas
    }

    //desenvolvimento
    nota_mais_alta = notas[0]; //nota mais alta assumira o valor do vetor 0
    
    //percorrer o vetor procurado a mais alta
    for (int i = 0; i < 5; i++)
    {
        if(notas[i] > nota_mais_alta) //se a nota atual for mais
        {
            nota_mais_alta = notas[i]; //atualizara a nota_mais_alta
        }
    }

    //saida de dados
    cout << "a nota mais alta da turma: " << nota_mais_alta << endl;

    return 0;
}