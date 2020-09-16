#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witamy w losowaniu, witamy komisje do gier i hazardu!" << endl;
    sleep(3);
    system("clear");
    cout << "Beben maszyny losujacej jest pusty" << endl;
    sleep(3);
    system("clear");
    cout << "Nastepuje zwolnienie blokady" << endl;
    sleep(3);


    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {
    liczba = rand()%49+1;
    cout << liczba << "\a" << endl;
    sleep(1);
     }

     cout <<"Sprawdz, czy wygrales!" << "\a" <<endl << endl;

    return 0;
}
