#include <iostream>
#include <string>

using namespace std;

string fun(string str)
{
    string temp;
    for (int i=0;i< str.length();i++){
        if(str[i] =='X'){
            temp +="Y";
        }
        else{
            temp +="X";
        }
    }
    str += temp;
    return str;
}

int main()
{
    int j=0,x;
    string str = "X";
    cout <<"Podaj indeks: ";
    cin>>x;
    if(x >= 0 && x <= 20){
        while(j != x){
        str = fun(str);
        j += 1;
        }
    }
    else{
        cout << "Podales zly indeks!";
        return 0;
    }

    cout<<str[x];

    return 0;
}
