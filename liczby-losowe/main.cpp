#include <iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int liczba, dana, licznik=0;


int main()
{
    cout << "Witaj, pomyslalem liczbe z zakresu: 1 do 100" << endl;

    srand(time(NULL));

    liczba = rand()%100+1;

    cout << "Podaj jaka to liczba?" << endl;

    do
    {
        cin >> dana;

            if(liczba>dana)
            {
                cout << "Moja liczba jest wieksza niz twoja" << endl << "Podaj jaka to liczba" << endl;
            }

            else if(liczba<dana)
            {
                cout << "Moja liczba jest mniejsza niz twoja" << endl << "Podaj jaka to liczba" << endl;
            }

            licznik++;


    }while (liczba!=dana);

    cout << "Wygrales, po: " << licznik << " probach." << endl;


    return 0;
}
