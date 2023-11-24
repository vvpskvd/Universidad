#include <iostream>

using namespace std;

int main()
{
    int ini, i, factorial;
    cout << "Digite un numero entero cual sea para calcular factorial: \n";
    cin >> ini;
    factorial=1;
    for(i=1;i<=ini;i++) {
        factorial = factorial * i;
    }
    cout << "El factorial de " << ini << " es " << factorial << endl;

    return 0;
}
