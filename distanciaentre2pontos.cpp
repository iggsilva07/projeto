#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

double x1,x2,y1,y2,dist;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double aux = ((x2- x1)*(x2 -x1)) + ((y2 -y1)*(y2-y1));
    dist = sqrt(aux);
    cout << fixed << setprecision(4);
    cout << dist << endl;
return 0;


}