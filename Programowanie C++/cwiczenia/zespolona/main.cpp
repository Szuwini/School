#include <iostream>


using namespace std;

class zespolona
{
private:
    double a,i;
    friend  void suma(zespolona jeden, zespolona dwa);
public:
    void wczytaj();

};

void zespolona::wczytaj()
{
    cout <<"Podaj liczbe zespolona: "<<endl;
    cin >> a >> i;
}
void suma(zespolona jeden, zespolona dwa)
{
    int rzeczywista = jeden.a + dwa.a;
    int urojona = jeden.i + dwa.i;
    cout << "Wynik dodawania: " << rzeczywista << "+" << urojona << "i" <<endl;
}

int main()
{
    zespolona jeden,dwa;
    jeden.wczytaj();
    dwa.wczytaj();
    suma(jeden,dwa);
    return 0;
}
