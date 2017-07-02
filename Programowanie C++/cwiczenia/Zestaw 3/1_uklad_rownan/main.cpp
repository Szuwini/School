#include <iostream>

using namespace std;

double linear(double a1, double b1, double a2, double b2,double c1, double c2)
{
    double W, Wx, Wy,x,y;

    W = (a1*b2) - (b1*a2);
    Wx =  (c1*b2) - (b1*c2);
    Wy = (a1*c2) - (c1*a2);

    if (W != 0){
        x = Wx/W;
        y = Wy/W;
    }
    else if(W==0 && Wx != 0 && Wy != 0){
        cout << "Uklad jest sprzeczny";
        return 0;
    }
    else if(W==0 && Wx ==0 && Wy ==0){
        cout << "Uklad jest nie oznaczony";
        return 0;
    }

    cout << "X wynosi: "<<x<<"\nY wynosi: "<<y;

}


int main()
{
    double a,b,c,d,c1,c2;
    cout << "Podaj wspolczynniki: \n" << endl;
    cin >> a >> b >> c >> d;
    cout << "Podaj dwa wyrazy wolne: \n" << endl;
    cin >> c1 >> c2;
    linear(a,b,c,d,c1,c2);
    return 0;
}
