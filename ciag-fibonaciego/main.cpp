#include <iostream>
#include <iomanip>

using namespace std;



int main()
{
int n;

cout << "ile liczb fibonacciego mam wyznaczyc: ";
cin >> n;

long double ciag[n];

ciag[0]=1;
ciag[1]=1;

for(int i=2; i<n; i++)
{

ciag[i]=ciag[i-1]+ciag[i-2];

}

cout <<setprecision(10000);

  // for(int i=0; i<n; i++)
  // {
//
   //cout << "wyraz nr " << i+1 << ": " << ciag[i] << endl;


   //}

   //cout << endl << "wyraz nr" << n << ":" << ciag [n-1];

cout << "zlota zliczba:" << ciag[n-1]/ciag[n-2];

    return 0;
}
