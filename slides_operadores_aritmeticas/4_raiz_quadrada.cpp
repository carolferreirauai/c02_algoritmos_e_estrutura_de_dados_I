/*
4) CRIE UM PROGRMA QUE REALIZA A RAIZ QUADRADA DE UM NÚMERO INSERIDO NA
ENTRADA, E EXIBA O RESULTADO COM 2 CASAS DECIMAIS DE PRECISÃO.
*/
#include <iostream> //biblioteca
#include <cmath> //biblioteca matemática
#include <iomanip> //limitar a casa decimais

using namespace std; //espaços

int main() //função principal
{
    //declaração de variaveis
    int x; //numero inserido pelo user
    int r; //resultado

    //entrada de dados
    cout << "Digite um número: ";
    cin >> x;

    //desenvolvimento 
    r = sqrt(x);

    //saida de dados
    cout << fixed << setprecision(2);
    cout << "Resultado da raiz quadrado: " << r << endl;

    return 0;
}
