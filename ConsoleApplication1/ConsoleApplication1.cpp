#include <iostream>

using namespace std;


int main()
{
    
    int lp = 0;
    int p = 2;
    int n;
    int d;
    bool gg;
    cout << "podaj ile liczb" << endl;
    cin >> n;
    
    while (lp < n) {
        gg = true;
        for (int d = 2; d <= p - 1; d++) {
            if (p % d == 0) {
                gg = false;
            }
        }
        if (gg==true) {
            cout << p << "jest pierwsze" << endl;
            lp = lp + 1;
        }
        p = p + 1;
    } 
}
