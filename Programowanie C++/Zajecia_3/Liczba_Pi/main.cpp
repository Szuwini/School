#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>

#include <gstreamer-1.0/gst/gst.h>


using namespace std;

double pi(int n,int x) {
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {
        sum += sign/(2.0*i+1.0);
        sign *= -1;
    }
    cout << fixed << setprecision (x) << 4.0*sum << endl;

}

int main()
{
    int x;
    cout << "Podaj ile liczb po przecinku mam policzyć: ";
    cin >> x;
    pi(1000000,x);
}
