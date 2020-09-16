#include <iostream>
#include <time.h>
#include <unistd.h>
#include <stdio.h>


using namespace std;

void Max (int tab[], int n)
{
    int x;

    if (tab[0]>tab[1])
    {
        x = tab[0];
    }

    else if (tab[0] < tab[1])
    {
        x=tab[1];
    }

//cout <<endl << endl << x;

    for (int i=2; i<n; i++)
    {
        if (tab[i]>x)
        {
            x=tab[i];
        }
    }

    cout << endl << "Najwieksza liczba to: " << x;

}

void Minimum (int tab[], int n)
{
    int x;

    if (tab[0] < tab[1])
    {
        x = tab[0];
        cout << endl << x;
    }

    else if (tab[0] > tab[1])
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

void Srednia (int tab[], int n)
{
    float suma=0;

    for(int i=0; i<n; i++)
    {
        suma+=tab[i];
    }

    cout << endl << "Srednia to: " << suma/n;

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

    while(true)
    {
        cout << endl << "------------------------" << endl<< "Podaj, co chcesz wyznaczyc: " << endl << "1. Maksymalna liczba" << endl << "2. Minimalna liczba" << endl << "3. Srednia" << endl;
        int wybor;
        cin >> wybor;

        switch (wybor)
        {
            case 1:
                Max(tab, n);
            break;

            case 2:
                Minimum(tab, n);
            break;

            case 3:
                Srednia(tab, n);
            break;

            default:
                cout << "Nie ma takiej opcji!";
        }
    }









    return 0;
}
