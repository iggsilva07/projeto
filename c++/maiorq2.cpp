#include <iostream>
#include <cmath>
using namespace std;

int main(){

int a,b,c, maiorAB;

    cin >> a >> b >> c;
        maiorAB = (a+b+abs(a-b))/2;
        maiorAB = (maiorAB+c+abs(maiorAB-c))/2;

    cout << maiorAB << " eh maior\n";

return 0;

}