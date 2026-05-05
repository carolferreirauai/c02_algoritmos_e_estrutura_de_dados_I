/*
2) CRIE UM PROGRAMA QUE FAÇA A CONVERSÃO DE UM ÂNGULO EM GEAUS PARA RADIANOS.
*/
#include <iostream> //biblioteca
#include <cmath> //biblioteca matemática
#include <locale.h> //corrigir o portuguese

using namespace std; //espaços

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //correção de acentos

    //declaração de variveis
    double a; //angulo
    float pi = 3.14159; //valor de pi
    float r; //radiano

    //entrada de dados
    cout << "Qual ângulo deseja converter para radiano? ";
    cin >> a;

    //desenvolvimento
    r = a * (pi/180.0);
    
    //saida de dados
    cout << r << " rad"; 

    return 0;
}