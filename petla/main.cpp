#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{

    for (int i = 15; i>=1; i--)
    {

         cout << i << endl;
        sleep(1);
        system("clear");
    }

    cout << "JEBUT!";

    return 0;
}
