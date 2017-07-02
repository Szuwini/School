#include <iostream>

using namespace std;

class wskaznik
{
    int *wsk;

public:
    int utworz(int n);
    int *zwroc();
    void zwolnij();
    void kopiuj(wskaznik &ref);
};


int wskaznik::utworz(int n)
{
    wsk = new int[n];
}

int* wskaznik::zwroc()
{
    return wsk;
}

void wskaznik::zwolnij()
{
    delete [] wsk;
    wsk = NULL;
}

void wskaznik::kopiuj(wskaznik & ref)
{
    ref.wsk = wsk;
}

int main()
{
    wskaznik p;
    p.utworz(30);
    int* c = p.zwroc();
    p.zwolnij();

    cout <<c<< endl;
    return 0;
}
