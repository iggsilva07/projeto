#include <iostream>
using namespace std;

int main()
{
    int x[10];

    for(int i = 0; i <=9;i++ )
    {
        cin >> x[i];
        if(x[i] <= 0)
         x[i] = 1;
       
    }

        for(int i = 0; i <=9; i++)
        {
            cout << "X["<< i <<"] = " << x[i] <<endl;
        }

return 0;
}
 