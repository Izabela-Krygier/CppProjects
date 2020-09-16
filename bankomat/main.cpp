#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat" << endl;
    cin >> wiek;

    if ((wiek >= 18 ) && (wiek >= 35))
    {
        cout << "jestes pelnoletni i mozesz zostac prezydentem dudelem";
    }

    else if ((wiek >=18) && (wiek<35))
    {
        cout << "jestes pelnoletni, ale nie zostac prezydentem dudelem";
    }

    else
    {
    cout << "Nie jestes pelnoletni!";
    }

    return 0;
}
