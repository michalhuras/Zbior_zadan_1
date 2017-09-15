#include <iostream>

using namespace std;

//Program s³u¿¹cy do obliczania symbolu Newtonu
//Wykorzystuje funkcje rekurencyjn¹ silnia


int silnia(int x)
{
    if (x==1)
    {
        return x;
    }
    else
    {
        return silnia(x-1)*x;
    }
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
