#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int cedula,ced1 = 0, ced2 = 0, ced5 = 0, ced10 = 0, ced20 = 0, ced50 = 0, ced100 = 0;

    cin >> cedula;

    ced100 = cedula /100;
    ced50 = (cedula%100)/50;
    ced20 = ((cedula%100)%50)/20;
    ced10 = (((cedula%100)%50)%20)/10;
    ced5 = ((((cedula%100)%50)%20)%10)/5;
    ced2 = (((((cedula%100)%50)%20)%10)%5)/2;
    ced1 = ((((((cedula%100)%50)%20)%10)%5)%2)/1;

    cout << cedula << endl;
    cout << ced100 << " nota(s) de R$ 100,00" << endl;
    cout << ced50 << " nota(s) de R$ 50,00" << endl;
    cout << ced20 << " nota(s) de R$ 20,00" << endl;
    cout << ced10 << " nota(s) de R$ 10,00" << endl;
    cout << ced5 << " nota(s) de R$ 5,00" << endl;
    cout << ced2 << " nota(s) de R$ 2,00" << endl;
    cout << ced1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}