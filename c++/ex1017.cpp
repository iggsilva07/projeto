#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int gasto, kmhora;

    cin >> gasto;
    cin >> kmhora;
    cout << fixed << setprecision(3); 
    cout << ((gasto *  kmhora)/12.0) << endl;

    return 0;
}