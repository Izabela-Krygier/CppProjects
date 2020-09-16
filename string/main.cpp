#include <iostream>

using namespace std;

int main()
{
    string imie;
    int dlugosc;

    while (true)
    {cout << "Podaj swoje imie: ";
    cin >> imie;

    dlugosc=imie.length();

    //cout << dlugosc;

    if(imie[dlugosc-1]=='a')
    {
    cout << "Prawdopodobnie jestes kobieta." << endl;

    }
    else
    {
    cout << "Prawdopodobnie jestes mezczyzna." << endl;
    }

    }




    return 0;
}
