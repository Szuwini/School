#include <iostream>

#define size 20

using namespace std;

class Stos
{
private:
    int top;
    int *storage;
public:
    Stos();
    Stos(const Stos&);
    ~Stos();
    int z_wierzchu();
    void usun_z_wierzchu();
    void poloz_na_stos(int);
    bool pusty();
};

Stos::Stos()
{
    top = -1;
    storage = new int[size];

}

Stos::Stos(const Stos &s)
{

}

Stos::~Stos()
{
   delete []storage;
   top = -1;
}

int Stos::z_wierzchu()
{
    return storage[top-1];
}

void Stos::usun_z_wierzchu()
{
   if(pusty()){
    cout << "Stos jest pusty!";
   }
   else{
    top--;
   }

}

void Stos::poloz_na_stos(int a)
{
    if (top == size){
        cout <<"Pelny stos";
    }
    else{
        storage[top] = a;
        top++;
    }
}

bool Stos::pusty()
{
    if(top==-1){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    Stos s;
    s.poloz_na_stos(7);
    s.poloz_na_stos(17);
    s.usun_z_wierzchu();
    s.poloz_na_stos(27);

    cout << s.z_wierzchu() << endl;
    s.~Stos();
    return 0;
}
