#include <iostream>

using namespace std;

int main()
{
   	int cont=0;
   	int nota;
   	float num;

	cout << "Cuantas notas desea meter? \n";
	cin >> num;
	    for (int i = 0; i < num; i++) {
        cout << "Cual fue su nota? \n";
        cin >> nota;
        cont = cont + nota;
    }
    double op = static_cast<double>(cont) / num;
    double tn = op * 0.2;

    cout << "Promedio de notas: " << op << "\n";
    cout << "Tercera nota: " << tn << endl;

    return 0;
}
