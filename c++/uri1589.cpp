#include <iostream>
using namespace std;

int main()
{

    int n,i = 1;

    cin >> n;
    while (i <= n)
    {   int a , b, resultado;
        cin >> a >> b;
        resultado = a + b;
        cout <<  resultado << endl;
        i++;
    }

    return 0;
}