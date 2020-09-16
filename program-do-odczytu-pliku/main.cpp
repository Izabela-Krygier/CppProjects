#include <iostream>
#include <fstream>


using namespace std;

int main()
{

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    if(plik.good()==false)
    {
        cout << "Plik nie istnieje!" << endl;
    }

    string linia;
    int nr_linii=1;

    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: cout << "Imie: " << linia << endl;
            break;
            case 2: cout << "Nazwisko: " << linia << endl;
            break;
            case 3: cout << "Numer telefonu: " << linia << endl;
            break;


        }
          if(nr_linii==3)
                {nr_linii=0;}
            nr_linii++;


    }

    plik.close();



    return 0;
}
