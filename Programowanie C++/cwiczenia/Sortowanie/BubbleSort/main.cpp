#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

vector<int> Bubble(vector<int>&tab)
{
    bool flag = true;
    int temp,counter;
    while(flag==true){
        counter = 0;
        for (int i=1;i<tab.size();i++){
            if(tab[i-1]>tab[i]){
                counter = counter+1;
                temp = tab[i-1];
                tab[i-1] = tab[i];
                tab[i]=temp;
            }
        }
        if(counter == 0){
            flag=false;
        }
    }
    return tab;
}

void Print(vector<int>&tab)
{
    for (int j=0;j!=tab.size();j++){
        cout<<tab[j]<<',';
    }

}

int main()
{
    srand(time(NULL));

    vector<int> tab;

    for(int i=0;i!=10;i++){
        tab.push_back(rand()%20);
    }

    cout <<"Losowa Tablica: ";
    Print(tab);
    Bubble(tab);
    cout<<"\n"<<"Posortowana tablica: ";
    Print(tab);
    return 0;
}
