#include <iostream>

using namespace std;

//Program sluzacy do obliczania symbolu Newtonu
//Wykorzystuje funkcje iteracyjna silnia


int silnia(int x)
{
    int i=1;
    for (x;x>1;x--)
    {
        i=i*x;
    }
    return i;
}

int main()
{
    int k,n,wynik;

    cout << "WprowadŸ k" << endl;
    cin>> k;
    cout << "WprowadŸ n" << endl;
    cin>> n;

    wynik=silnia(n)/silnia(n-k)/silnia(k);
    cout << "Wynik: " <<wynik<<endl;

    return 0;
}
