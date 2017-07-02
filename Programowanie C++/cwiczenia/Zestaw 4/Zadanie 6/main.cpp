#include <iostream>

using namespace std;

int* reserv(void)
{
    int *wsk;
    wsk = new(int);
    cout << wsk;
    delete wsk;
}

int main()
{
    reserv();
    return 0;
}
