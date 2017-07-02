#include <iostream>

using namespace std;

typedef struct lista{
    int i;
    struct lista *wsk;
};

int main()
{
    lista p;
    p.i = 10;
    cout << "Hello world!" <<p.i<< endl;
    return 0;
}
