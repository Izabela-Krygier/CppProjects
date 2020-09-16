#include <iostream>

using namespace std;

int main()
{
    int A = 3;
    int B = 2;
    int C;

    cout<< A << B << endl;

    C=B;
    B=A;
    A=C;

    cout<< A << B << endl << endl;
    cout<< "--------------------------------" << endl;



    int tablica[6]={3, 2, 5, 0, 4, 1};
    int tymczas;

    for (int i=0; i<=5; i++)
    {

        cout << tablica[i];

    }

    for (int j=0; j<=4; j++)
    {

        if(tablica[j]>=tablica[j+1])
        {
            tymczas = tablica[j+1];
            tablica[j+1]=tablica[j];
            tablica[j] = tymczas;
        }
    }

    cout << endl << endl;

    for (int k=0; k<=5; k++){

    cout << tablica[k];



    }
















    return 0;
}
