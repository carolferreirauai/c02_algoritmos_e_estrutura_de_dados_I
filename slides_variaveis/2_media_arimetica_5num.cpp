/*
2) DESENVOLVA UM PROGRAMA QUE RECEBA 5 NÚMEROS INTEIROS NA ENTRADA E RETORNE
 A MÉDIA ARITMÉTICA DESTES NÚMEROS, COM CASAS DECIMAIS (REAL)
*/

#include <iostream> //biblioteca
#include <locale.h> //biblioyteca - acentos
#include <iomanip> //pontos flutuantes

using namespace std; //espaço

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //aceitar acentos

    //declaração de dados
    int a, b, c, d, e; //5 números do usuário
    double media;
    
    //entrada de dados
    cout << "Digite 5 números para saber a média aritmética: ";
    cin >> a >> b >> c >> d >> e;

    //desenvolvimento
    media = (a + b + c + d + e) / 5.0; //dividir por 5.0 para forçar a divisão real (double)

    //saida de dados
    cout << fixed << setprecision(1);
    cout << "Resultado da Média Aritmética: " << media << endl;

    return 0;
}