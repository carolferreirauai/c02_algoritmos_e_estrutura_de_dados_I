/*
VAMOS PRATICAR?
FAÇA UM PROGRMA QUE LEIA UM NÚMERO INTEIRO N.
DEPOIS O PROGRMA DEVE MOSTRAR OS NÚMEROS DE 1 A N.
*/

//biblioteca
#include <iostream>

using namespace std; //espaço

int main() //função principal
{
  //declaração de variaveis
  int n;

  //entrada de dados
  cin >> n;

  //desenvolvimento //saida de dados
  for (int i = 0; i <= n; i++)
  {
    cout << i << endl;
  }

  return 0;
}