/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA A NOTA DE VÁRIOS ALUNOS, E
VERIFIQUE SE CADA UM DELES PASSOU OU NÃO.
A NOTA PARA PASSAR É DE 60 PARA CIMA.
DEPOIS DE CADA NOTA, O PROGRAMA DEVE IMPRIMIR "PASSOU" OU
"NÃO PASSOU".
A ENTRADA DE DADOS TERMINA QUANDO FOR DIGITADO UMA NOTA NEGATIVA.
*/

//biblioteca
#include <iostream>
#include <locale.h>

using namespace std; //espaço

int main() //função principal
{
    //correção de acentos
    setlocale(LC_ALL, "Portuguese");

    //declaração de variaveis
    int notas;//nota dos alunos

    //entrada de dados
    cin >> notas;

    while(notas >= 0) //loop será quebrado com uma nota negativa
    {       
        //saida de dados - verificar a nota.
        if (notas >= 60) 
        {
            cout << "Passou" << endl;
        }
        else
        {
            cout << "Não passou" << endl;
        }

        cout << "---------------------------" << endl;

        cin >> notas;

    }

    cout << "Fim do programa" << endl;
    
    return 0;
}