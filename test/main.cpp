#include <iostream>
#include <time.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

void Minimum (int tab[], int n)
{
    int x;

    if (tab[0] < tab[1])
    {
        x = tab[0];
        cout << endl << x;
    }

    else if (tab[0] < tab[1])
    {
        x = tab[1];
        cout << endl << x;
    }



    cout << endl << x;

    for (int i=2; i<n; i++)
    {
        if (tab[i]<x)
        {
            x=tab[i];
            cout << endl << x << endl;
        }
    }

    cout << endl << "Najmniejsza liczba to: " << x;

}

int main()
{
    int n;

    cout << "Podaj ile cyfr chcesz porownac:";
    cin >> n;

    while (n<2)
    {
        cout << "Po co porownywac jedna liczbe?";
        getchar();getchar();

        cout << "Podaj ile cyfr chcesz porownac:";
        cin >> n;
    }

    srand(time(NULL));

    int tab[n];

    for (int i=0; i<n; i++)
    {
        tab[i] = rand()%101;
        cout << tab[i] << ", ";
    }

    Minimum(tab, n);



    return 0;
}
