#include <iostream>
#include <string>

using namespace std;

string convar24h(int hora, int minuto, string periodo) {
    if (periodo == "pm" && hora != 12) {
        hora += 12;
    } else if (periodo == "am" && hora == 12) {
        hora = 0;
    }

    string horaStr = to_string(hora);
    string minutoStr = (minuto < 10) ? "0" + to_string(minuto) : to_string(minuto);

    if (horaStr.length() == 1) {
        horaStr = "0" + horaStr;
    }

    return horaStr + minutoStr;
}

int main() {
    int hora, minuto;
    string periodo;

    cout << "Ingresa la hora (1-12): ";
    cin >> hora;

    cout << "Enter the minuto (0-59): ";
    cin >> minuto;

    cout << "Enter 'am' or 'pm': ";
    cin >> periodo;

    string resultado = convar24h(hora, minuto, periodo);
    cout << "The 24-hour format is: " << resultado << endl;

    return 0;
}
