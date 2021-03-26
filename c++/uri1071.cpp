#include <iostream>
using namespace std;

int main()
{

    int n, totx = 0,toty = 0, x, y,totalr;

    cin >> x >> y;

    if(x < 0){
        x = x * (-1);
    }
     if(y < 0){
        y = y * (-1);
    }

    for(n=1; n<x ;n++){
        if(n%2==1){

            totx = totx + n;
        }
    }

    for( n=1; n<y ;n++) {
        if(n%2==1){

            toty = toty + n;
        }
    }

    totalr = totx - toty;

    cout << totalr << endl;

    return 0;
}