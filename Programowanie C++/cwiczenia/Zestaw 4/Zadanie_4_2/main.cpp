#include <iostream>

using namespace std;

enum Plec{
    mezczyzna, kobieta
};

enum mezczyzna{
    wolny,zonaty
};

enum kobieta{
    wolna, mezatka
};

union czlowiek{
    enum mezczyzna m;
    enum kobieta k;
};

struct dane_osobowe{
    char imie[30];
    char nazwisko[30];
    enum Plec plec;
    union czlowiek stan_cywilny;
};

void wczytaj(struct dane_osobowe tab[],int n)
{
    int i,d;

    for(i = 0;i!=n;i++){
        cout << "Jesli jestes Kobieta wybierz: 1, jesli jestes Mezczyzna wybierz: 2\n";
        cin >> d;
        if(d==1){
            tab[i].plec=kobieta;
        }
        else{
            tab[i].plec=mezczyzna;
        }
        cout <<"Podaj imie i nazwisko: ";
        cin >>tab[i].imie>>tab[i].nazwisko;
        cout << "Podaj stan cywilny \n";
        if(tab[i].plec==kobieta){
            cout << "wolna -0,mezatka -1";
            cin >>d;
            if(d==0){
                tab[i].stan_cywilny.k=wolna;
            }
            else{
                tab[i].stan_cywilny.k=mezatka;
            };
        }
        else{
            cout <<"wolny-0,zonaty-1";
            cin >> d;
            if(d==0){
                tab[i].stan_cywilny.m=wolny;
            }
            else{
                tab[i].stan_cywilny.m=zonaty;
            }
        }
    }
}

int main()
{
    dane_osobowe tab[1];
    wczytaj(tab,1);
    return 0;
}
