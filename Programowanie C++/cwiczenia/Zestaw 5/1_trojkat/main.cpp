#include <iostream>

using namespace std;


typedef struct trojkat{
    int c;
    int a;
    int b;

}trojkat;


int obwod(trojkat pierwszy)
{
    cout << "Obwod wynosi: " << pierwszy.a+pierwszy.b+pierwszy.c;
}

int main()
{
    trojkat pierwszy = {3,4,10};
    obwod(pierwszy);
}
