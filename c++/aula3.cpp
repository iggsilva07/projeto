#include <iostream>

using namespace std;

    int i,n;

int main(){
     cin >> n;

    for(i = 1; i <= n ; i++){
        if(i % 2 == 0){
            
            cout <<i << "^2 = "<< (i*i) <<endl;
        }

    }

}