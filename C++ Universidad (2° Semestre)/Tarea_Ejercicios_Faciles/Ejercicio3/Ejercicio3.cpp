#include <iostream>

using namespace std;

int main()
{
    int ini;

    cout << "Digite un numero entero cual sea: \n";
    cin >> ini;

    if (ini % 2 == 0) {
    cout << "El numero es par." << endl; }
    else {
    cout << "El numero es impar." << endl; }

    return 0;
}
