    #include <iostream>
    using namespace std;

    int main()
    {
        int vet[1000],i,t,x=0;

        cin >> t;
        for(i = 0; i<1000; i++)
            {
                vet[i] = x;
                x += 1;
                if (x >= t)
                {
                    x = 0;
                }

            cout <<"N["<<i<<"] = " << vet[i] << endl;
                
            }
    }