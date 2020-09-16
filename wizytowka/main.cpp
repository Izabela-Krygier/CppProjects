#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    //cout << "Podaj imie: ";             cin >> imie;
    //cout << "Podaj nazwisko: ";         cin >> nazwisko;
    //cout << "Podaj numer telefonu: ";   cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    if(plik.good()==false)
    {
        cout << "Plik nie isnieje";
        exit(0);
    }


    string linia;
    //int nr_linii=1;
    /*while(getline(plik, linia))
    {
      switch(nr_linii)
    {


    }


        nr_linii++;



    }*/


    while (getline(plik,linia))
    {
        cout <<linia<<endl;
    }




    plik.close();







    return 0;
}
