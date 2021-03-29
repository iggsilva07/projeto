#include <iostream>

using namespace std;

int main()
{
  int matriz[3][3];
  int linha3, c2;

  for(int i = 1; i < 4; i++)
  {
    for(int j = 1; j < 4; j++)
    {
      cout << "Digite um numero para matriz "<< i <<", " << j << ": ";
      cin >> matriz[i][j];
    }
  }
 
  

  for(int i = 1; i < 4; i++)
  {
    for(int j = 1; j < 4; j++)
    {
      cout << " "<< matriz[i][j];

    }
    cout << "\n";
  }

    cout << "\n";
    for(int j = 1; j < 4; j++)
    {
      linha3 = linha3 + matriz[3][j];

    }

    for(int i = 1; i < 4; i++)
    {

      c2 = c2 + matriz[i][2];
    }
 

  cout << "A soma da linha 3 eh! " <<  linha3 << endl;
  cout << "A soma da coluna 2 eh! " <<  c2 << endl;



return 0;
}