#include <iostream>

#define wielkosc 30
using namespace std;


class Kolejka
{
private:
    int *kolejka;
    int pierw;
    int ostatni;
public:
    Kolejka();
    Kolejka(const Kolejka&);
    ~Kolejka();
    int pierwszy();
    void usun_pierwszy();
    void dodaj_na_koniec(int a);
    bool pusta();
};

Kolejka::Kolejka()
{
    kolejka = new int(wielkosc);
    pierw = ostatni =0;
}

Kolejka::~Kolejka()
{
    delete [] kolejka;
}

int Kolejka::pierwszy()
{
    if(pusta()){
        cout <<"Kolejka jest pusta";
        return -1;
    }
    return kolejka[pierw];
}

void Kolejka::usun_pierwszy()
{
    if(pusta()){
        cout <<"Nie mozna usuwac elementow z pustej kolejki!";
    }
    else if(pierw == ostatni){
        pierw = ostatni = 0;
    }
    else{
        pierw++;
    }

}

void Kolejka::dodaj_na_koniec(int a)
{

    if(pusta()){
        pierw = 0;
        ostatni =0;
    }
    kolejka[ostatni] = a;
    ostatni++;
}

bool Kolejka::pusta()
{
    if(pierw==0 && ostatni==0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    Kolejka k;
    k.dodaj_na_koniec(5);
    k.dodaj_na_koniec(10);
    cout <<"\n"<<k.pierwszy();
    k.usun_pierwszy();
    cout <<"\n"<<k.pierwszy();

    return 0;
}
