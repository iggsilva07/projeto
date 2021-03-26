#include <iostream>
using namespace std;

int main (){
    int N, i;
    int soma = 0;

    cin >>N;

    for (i = 0; i < N; i++)
    {
        soma = 0;
        int x,y,j;
        cin >> x >> y;

        if (x < y){
            for (j = x+1; j < y; j++)
            {
                if (j % 2 != 0){
                    soma += j;
                }
            }
            cout << soma << endl;          
        }
        else if (x > y){
            for (j = x-1; j > y; j--)
            {
                if (j % 2 != 0){
                    soma += j;
                }
            }
            cout << soma << endl;            
        }
        else {
           cout <<"0\n";
        }
    }
    return 0;
}