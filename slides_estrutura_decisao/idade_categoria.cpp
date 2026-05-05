/*
VAMOS PRATICAR?
FAÇA UM PROGRAMA QUE LEIA A IDADE DE UM ATLETA E
MOSTRE A SUA CATEGORIA, SEGUNDO O SEGUINTE CRITÉRIO:
- MENOS 13 ANOS: INFANTIL.
- DE 14 A 17 ANOS: JUVENIL.
- ACIMA DE 17 ANOS: ADULTO.
*/
#include <iostream> //biblioteca
#include <cmath> //matematico
#include <locale.h> //corrigir acentos

using namespace std;

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //corrigir acentos

    //declaração de variaveis
    int idade; //idade

    //entrada de dados
    cout << "Digite sua idade: ";
    cin >> idade;

    //desenvolvimento //saida de dados
    if(idade <= 13)
    {   
        cout << "Sua categoria é: infatil" << endl;
    }
    else if (idade >= 14 && idade <= 17)
    {
        cout << "Sua categoria é: juvenil" << endl;
    }
    else
    {
        cout << "Sua categoria é: adulto" << endl;
    }
    
    return 0;
}