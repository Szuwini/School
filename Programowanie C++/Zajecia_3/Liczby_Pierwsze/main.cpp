#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    int x=0;
    int i =3;
    std::vector<int> primes;
    primes.push_back(2);

    cout << "Podaj ilosc liczb pierwszych: ";
    cin >> N;

    while(x < N){

        bool prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            primes.push_back(i);
            cout << i << " ";
            x++;
        }
        i++;
    }

    return 0;
}
