#include <iostream>

using namespace std;

int main()
{
    int ini;
    cout << "Ingrese un numero natural: \n";
    cin >> ini;
    if (ini % 3 == 0) {
        cout << "El numero " << ini << " es multiplo de 3. \n";}
    else {
        cout << "El numero " << ini << " no es multiplo de 3. \n";}

    return 0;
}
