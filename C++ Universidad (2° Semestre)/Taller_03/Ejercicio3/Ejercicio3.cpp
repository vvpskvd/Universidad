#include <iostream>

using namespace std;

int main()
{
    int status = 0, ini = 0, ini2 = 0, op = 0, sc_kds = 0;
    cout << "Bienvenido al programa implementado por el gobierno de Colombia. \n";

    cout << "Digite 1 si es Casada / Digite 2 si es viuda: \n";
    cin >> status;
    cout << "Cuantos hijos tiene usted?: \n";
    cin >> ini;
    cout << "Cuantos hijos tiene usted en la edad escolar (La edad escolar es entre los 6 y 18 de edad): \n";
    cin >> ini2;

    sc_kds=ini2*10;

    if (ini<=0) {
            cout << "No aplica al no tener hijos. \n"; }
     else {
            if (status==1) {
                if (ini<=2) {
                    op=70+sc_kds;
                } else if (ini>=3 && ini<=5) {
                    op=90+sc_kds;
                } else if (ini>=6) {
                    op=120+sc_kds;
                }
            } else if (status==2) {
                if (ini<=2) {
                    op=70+sc_kds+20;
                } else if (ini>=3 &&  ini<=5) {
                    op=90+sc_kds+20;
                } else if (ini>=6) {
                    op=120+sc_kds+20;
                }
            }
            else {
                cout << "Numero no valido, reintente nuevamente. \n";
            }
                                cout << "El total que va a recibir de ayuda es: " << op << endl;
            }

            return 0;
    }


