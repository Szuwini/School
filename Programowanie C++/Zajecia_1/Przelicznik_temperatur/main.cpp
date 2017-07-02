#include <iostream>

using namespace std;

int main()
{
    float celsjusz,kelvin;
    float x = 0;
    cout << "Fahrenheit  "<<"Celsjusz  "<<"\tKelvin";
    while (x<301)
    {
        celsjusz = ((x-32)/2)*1.1;
        kelvin = ((x*1.8)-459.67);
        cout << "\n";
        cout << x <<"\t\t"<< celsjusz <<"\t"<< kelvin;
        x +=20;

    }


}
