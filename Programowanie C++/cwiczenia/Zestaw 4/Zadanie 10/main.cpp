#include <iostream>

using namespace std;

int translate(int n,int tab[5][5][5])
{
    int i,j,k;
    cout << "Podaj trzy wspolrzedne: ";
    cin >> i >> j >> k;
    cout << tab[i][j][k] << "," << tab [k][i][j];
    int temp = tab [i][j][k];
    tab[i][j][k] = tab [k][i][j];
    tab[k][i][j] = temp;

    cout <<"\n zmienione: " << tab[i][j][k] << "," << tab [k][i][j];

}

int main()
{
    int n = 5;
    int var = 0;
    int tab[5][5][5];
    for(int x= 0;x != n;x++){
        for(int y= 0;y != n;y++){
            for(int z= 0;z != n;z++){
                tab[x][y][z]=var;
                var++;
            }
        }
    }
    translate(n,tab);

    return 0;
}
