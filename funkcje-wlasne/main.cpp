#include <iostream>

using namespace std;




float ile_cali(float m)
{
   return m*39.37;
}

float ile_jardow(float m);

void ile_mil(float m)
{
cout << "na mile: " << m*0.0006213;
}

int main()
{
    float metry;
    cout << "Podaj ile metrow?: " << endl;
    cin >> metry;
    cout << "na cale: " << ile_cali(metry) << endl;
    cout << "na jardy: " << ile_jardow(metry) << endl;

    ile_mil(metry);






    return 0;
}

float ile_jardow(float m)
{
   return m*1.0936;
}