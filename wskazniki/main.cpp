#include <iostream>

using namespace std;

int main()
{
    int liczba = 10;
    int *w=&liczba;

    cout << liczba << endl;
    cout << w <<endl;
    cout << *w << endl;

    int x=50;
    w=&x;
    cout << x << endl;
    cout << w << endl;
    cout << *w << endl;




    return 0;
}
