#include <iostream>

using namespace std;

int main()
{

string slowo;
int dlugosc;

cout << "Podaj slowo: ";
getline(cin, slowo);
//cin >> slowo;

dlugosc=slowo.length();

//cout<<dlugosc;

for(int i=dlugosc-1; i>=0 ;i--)
{
cout <<slowo[i];

}




    return 0;
}
