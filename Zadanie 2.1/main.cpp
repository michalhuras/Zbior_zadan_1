#include <iostream>

using namespace std;

// Napisac deklaracje nastepujacych zmiennych

int main()
{
    //a wskaznik do znaku
    char a='a';
    char *wsk_a;
    wsk_a=&a;
    cout << *wsk_a << endl;
    //b referencje do dziesiecioelementowej tablicy liczb calkowitych
    int b[10];
    for (int i=0;i<10;i++)
    {
        b[i]=i;
    }
    int &ref_b=b[0];
    cout<<ref_b<<endl;

    //c tablica pieciu wskaznikow do liczb rzeczywistych
    float *c[5];

    //d wskaznik do stalej calkowitej
    int const *d;

    //e referencja do wskaznika znaku
    char &ref_e=*wsk_a;
    cout <<ref_e<<endl;

    //f sta³y wskaŸnik do sta³ej znakowej
    char const f='f';
    char const *wsk_f;
    wsk_f=&f;
    cout <<*wsk_f<<endl;

    //g wskaznik piecioelementowej tablicy liczb rzeczywistych
    float g[5];
    float *wsk_g;
    wsk_g=&g[0];
    for (int i=0;i<5;i++)
    {
        g[i]=i;
        cout << *wsk_g<<endl;
        wsk_g++;
    }

    //h wskaznik funkcji o parametrze i wartosci w postaci referencji do liczb calkowitych -na co to komu ?
    int *nazwa_funkcji(int &a);

    return 0;
}
