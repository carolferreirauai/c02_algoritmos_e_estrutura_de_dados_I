/*
EXERCÍCIOS
O DIA DA SEMANA DE UMA MATA (D, M, A) FORNECIDA ENTRE 1 DE MARÇO
DE 1700 E 28 DE FEVEREIRO DE 2100 PODE SER DETERMINADA POR:

N = INT (365.25 * G) + INT (30.6 * F) - 621049 + D
DS = ROUND(FRAC(N / 7) * 7) + DELTA + 1

G = {A - 1, M <= 2 || A, M > 2}
F = {M + 13, M <= 2 || M + 1, M > 2}
DELTA = {2, N < 36523 || 1, 36523 <= N < 73048 || 0, N >= 73048}

SE DS = 1, ENTÃO DOMINGO, SE FOR 2 É SEGUNDA, E ASSIM POR DIANTE.
*/

//biblioteca
#include <iostream>
#include <cmath> //matematico
#include <locale.h> //corrigir o português

using namespace std; //espaço

int main() //função principal
{
    setlocale(LC_ALL, "Portuguese"); //acentos

    //declaração de variaveis
    int dia;
    int mes;
    int ano;
    float n;
    float g;
    float f;
    int ds;
    float delta;
    double intpart, fracpart; //variaveis de modf

    //entrada de dados
    cout << "Dia: ";
    cin >> dia;
    cout << "Mês: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;

    //desenvolvimento
    //if do g e f
    if (mes <= 2)
    {
        g = ano - 1;
        f = mes + 13;
    }
    else
    {
        g = ano;
        f = mes + 1;
    }

    n = int(365.25 * g) + int (30.6 * f) - 621049 + dia;

    //if do delta
    if (n < 36523)
        delta = 2;
    else if (n < 73048)
        delta = 1;
    else 
        delta = 0;

    //modf()
    double div = n / 7;
    fracpart = modf(div, &intpart);

    ds = round(fracpart * 7) + delta + 1;

    //saida de dados
    switch (ds)
    {
        case 1:
        cout << "Domingo\n";
        break;

        case 2:
        cout << "Segunda\n";
        break;

        case 3:
        cout << "Terça\n";
        break;

        case 4:
        cout << "Quarta\n";
        break;

        case 5:
        cout << "Quinta\n";
        break;

        case 6:
        cout << "Sexta\n";
        break;

        case 7:
        cout << "Sábado\n";
        break;

        default:
        cout << "Data fora de intervalo\n";
    }

    return 0;
}