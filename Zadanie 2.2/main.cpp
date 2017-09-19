#include <iostream>

using namespace std;


//Napisac deklaracje oraz zainicjalizowac wskazniki nastepujacych funkcji
int main()
{
    //a int fun(char znak,int *wsk_int)

    //b float* fun2(float,float)


    //c funkcja o parametrze typu calkowitego, zwracajπca wskaünik do tablicy znakow [3][3]


    //d funkcja o parametrach typu int i int *, ktorej rezultatem jest referencja do znaku
    char (*g)[];
        char p[]="saaDAfdff";
    g[]=&p[0];

    p[]="saaDAfdff";

    cout <<*g<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
