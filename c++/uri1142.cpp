#include <iostream>
using namespace std;

int main()
{
    int l = 0 , n = 1;

    cin >> l;

    while(l--)
    {
        cout <<(n)<<" "<<(n+1)<<" "<<(n+2)<< " PUM" << endl;
        n += 4;
    }
    return 0;
}