#include <iostream>

//program za pomoc� funkcji iteracyjnej oraz rekurencyjnej rysuje choink� o zadanej wysokosci h

using namespace std;
int p,h,j;

int choinka(int p,int h)
{
    if (p-1==h)   return 0;
    else
    {

        for (j=0;j<h-p;j++)
            {
                cout<<" ";
            }

        for (j=0;j<(p*2)-1;j++)
            {
                cout<<"+";
            }

        cout<<endl;
        choinka(p+1,h);
    }
}

int main()
{
    cout << "Podaj wysoko�� choinki" << endl;
    cin>>h;
    choinka(1,h);

    return 0;
}
