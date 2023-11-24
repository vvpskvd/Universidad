#include <iostream>

using namespace std;

int main()
{
    double conv_pies, pies, mts, pulg, ydas, mlls;

    cout << "Ingrese la cantidad de pies a convertir: \n";
    cin >> pies;
    cout << "Ingrese la cantidad de metros a convertir: \n";
    cin >> mts;

    conv_pies = pies + (mts*3.281);

    mts=conv_pies/3.281;
    pulg=conv_pies*12;
    ydas=conv_pies/3;
    mlls=mts/1609;

     cout << "La cantidad de pies mas metros es: " << conv_pies << endl;
    cout << "La cantidad de metros mas metros por pies es: " << mts << " metros." << endl;
    cout << "La cantidad de pies mas metros a pulgadas es: " << pulg << " pulgadas." <<endl;
    cout << "La cantidad de pies mas metros a yardas es: " << ydas << " yardas." << endl;
    cout << "La cantidad de metros a millas es : " << mlls << " millas." << endl;

    return 0;
}
