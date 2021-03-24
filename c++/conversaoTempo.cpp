#include <iostream>
using namespace std;

int main()
{
    int n,min,hr,seg,shora;

    cin >> n;

    hr = n / 3600;
    shora = n - (hr*3600);
    min = shora / 60;
    seg = shora - (min*60);

    cout << hr <<":" << min << ":" << seg <<endl;
    return 0;

}