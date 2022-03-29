// fbbtnbntbtbebbbtgbebrbb.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int iloczyn;
    int nww;
    cout << "podaj liczbe a " << endl;
    cin >> a;
    cout << "podaj liczbe b " << endl;
    cin >> b;

    iloczyn = a * b;

    while (a != b) {
        if (a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    cout << "Najwiekszy wspolny dzielnik to " << a << endl;

    nww = iloczyn / a;

    cout << "Najmniejsza wspolna wielokrotnosc to " << nww << endl;
 
}
