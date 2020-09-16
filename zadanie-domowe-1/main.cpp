#include <iostream>
#include<tgmath.h>

using namespace std;

int main()
{

float tab[5], suma=0, srednia, tab2[5], x;



cout << "Podaj 5 liczb odzielonych spacja: ";

for (int i=0; i<5; i++)
{
    cin >> tab[i];
    suma+=tab[i];
}
 srednia=suma/5;

cout << endl << endl << "Srednia: " << srednia << endl;

for (int i=0; i<5; i++)
{
    tab2[i]=fabs(tab[i]-srednia);
    cout << tab2[i] << "  ";
}

cout << endl << endl;

x=tab2[0];
int y;
cout << "y = "<<y<<endl;

y = 0;

for (int i=0; i<5; i++)
{
    cout << x <<" > "<< tab2[i] << " | y= "<< y << endl;
    if (x>tab2[i])
    {

        x=tab2[i];
        y=i;

    }



}

cout << endl <<"x: " << x << "  " << "y: " << y;

cout << "Liczba najblizsza sredniej to: " << tab[y];






    return 0;
}
