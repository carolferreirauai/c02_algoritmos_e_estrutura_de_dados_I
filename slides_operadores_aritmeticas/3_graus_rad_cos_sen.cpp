/*
4) UTILIZANDO PARTE DO PROGRAMA 2, CRIE UM TERCEIRO PROGRAMA QUE EXIBA O SENO E
COSSENO DE UM ÂNGULO NA SAÍDA DO PROGRAMA. O ÂNGULO DEVE SER INSERIDO EM
GRAUS, E CONVERTIDO PARA RADIANOS.
*/

#include <iostream> //biblioteca
#include <cmath> //biblioteca matemática
#include <iomanip> //limitar a casa decimais

using namespace std; //espaços

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //correção de acentos

    //declaração de variveis
    double a; //ângulo
    float pi = 3.14159; //valor de pi
    float r; //radiano

    //entrada de dados
    cout << "Qual ângulo deseja converter para radiano? ";
    cin >> a;

    //desenvolvimento
    r = a * (pi/180.0);
    
    //saida de dados
    cout << fixed << setprecision(4);
    cout << "seno: " << sin(r) << endl;
    cout << "cosseno: " << cos(r) << endl;

    return 0;
}