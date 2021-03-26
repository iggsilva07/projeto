#include <iostream>
using namespace std;

int main()
{

int c,n;
    cin >> c;

    while (c--)
     {
        cin >> n;
     
        if (n % 2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
     }    
     return 0;
}