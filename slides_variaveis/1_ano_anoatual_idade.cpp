/* 
1) DESENVOLVA UM CÓDIGO EM C++ QUE LIA O ANO DE NASCIMENTO DO USUÁRIO E
RETORNE A SUA IDADE, NO FORMATO: "IDADE = X ANOS", ONDE X É A IDADE CALCULADA,
BASEADA NO ANO ATUAL.
*/

#include <iostream> //biblioteca

using namespace std; //espaço

int main() //função principal
{
    //declaração de variáveis
    int ano; //ano de nascimento
    int anoatual; //ano atual que estamos
    int idade; //idade
    int sub = 0; //subtração começa em 0
    
    //entrada de dados
    cout << "Digite seu ano de nascimento: ";
    cin >> ano;

    cout << "Digite o ano atual: ";
    cin >> anoatual;

    //desenvolvimento
    sub = anoatual - ano; //expressão para descobrir a idade

    //saida de dados
    cout << "idade = " << sub << " anos" << endl;

    return 0;
}