#include <iostream>

using namespace std;

int main()
{
    int ini;
    char cxc;
    int AnswC;
    int AnswF;
    int AnswK;

    cout << "Que operacion desea realizar? \n";
    cout << "C para Celsius / F para Fahrenheit / K para Kelvin \n";
    cin >> cxc;
    cout << "Digite el numero a convertir: \n";
    cin >> ini;
    switch (cxc) {
        case 'C':
            AnswC=ini;
			AnswF=(ini*9/5)+32;
			AnswK=ini+273.15;
			cout << "Celsius = " << AnswC << "\n";
			cout << "Fahrenheit = " << AnswF << "\n";
			cout << "Kelvin = " << AnswK << "\n";
			break;
        case 'F':
            AnswC=(ini-32)*5/9;
			AnswF=ini;
			AnswK=(ini-32)*5/9+273.15;
			cout << "Celsius = " << AnswC << "\n";
			cout << "Fahrenheit = " << AnswF << "\n";
			cout << "Kelvin = " << AnswK << "\n";
			break;
        case 'K':
            AnswC=ini-273.15;
			AnswF=(ini-273.15)*9/5+32;
			AnswK=ini;
			cout << "Celsius = " << AnswC << "\n";
			cout << "Fahrenheit = " << AnswF << "\n";
			cout << "Kelvin = " << AnswK << "\n";
			break;
        default:
            cout << "Operacion no valida, intente nuevamente." << endl;
            break;
    }
    return 0;
}
