#include <iostream>

using namespace std;

class Semafor
{
private:
    int maks;
    int mini = 0;
    int obecny = 0;
public:
    Semafor(unsigned int);
    Semafor();
    void rezerwuj();
    void zwolnij();
    bool stan();
};

Semafor::Semafor(unsigned int n)
{
    maks = n;
}

Semafor::Semafor()
{
    maks = 1;
}

void Semafor::rezerwuj()
{
    if (obecny==maks){
        cout<<"Semafor w maksymalnym stanie"<<endl;
    }
    else{
        obecny = obecny+1;
    }
}

void Semafor::zwolnij()
{
        if(obecny==mini){
            cout<<"Semafor w minimalnym stanie"<<endl;
        }
        else{
            obecny = obecny-1;
        }
}

bool Semafor::stan()
{
    if(obecny==maks){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    Semafor x;
    cout << x.stan() << endl;
    x.rezerwuj();
    cout <<x.stan()<<endl;
    return 0;
}
