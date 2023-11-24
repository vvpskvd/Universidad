#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int ini, cxc;
    double final_cxc;

    cout << "Digite un numero entero a elevar la potencia \n";
    cin >> ini;
    cout << "Digite la respectiva potencia \n";
    cin >> cxc;

        final_cxc = pow(ini, cxc);

    cout << "el numero elevado a la potencia de " << cxc << " es:" << final_cxc << endl;

    return 0;
}
