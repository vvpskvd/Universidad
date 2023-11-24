#include <iostream>

using namespace std;

int main()
{
    int ini, ini2;
    cout << "Digite un numero entero cual sea: \n";
    cin >> ini;
      if(ini==1){
        cout << "El numero NO es primo" << endl; }
      else {
        ini2=2;
            while(ini%ini2!=0){
            ini2++;}
                    if(ini2==ini)
                        cout << "El numero es primo" << endl;
                    else
                        cout << "El numero NO es primo" << endl;}
return 0;
}
