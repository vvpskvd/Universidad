#include <iostream>
#include <math.h>
#include <map>
#include <string>
using namespace std;

struct Est_general {
    string nombre;
    int edad;
    int calificacion;
};

int main() {
    int cant;
    cout << "Digite la cantidad de estudiantes que va ingresar:";
    cin >> cant;

    map<string, Est_general> estudiante;
    for (int i = 0; i < cant; i++) {
        Est_general est;

        cout << "Digite el nombre del estudiante numero " << i+1 << ":";
        cin >> est.nombre;
        cout << "Digite la edad del estudiante numero " << i+1 << ":";
        cin >> est.edad;
        cout << "Digite la calificacion del estudiante numero " << i+1 << ":";
        cin >> est.calificacion;

        estudiante[est.nombre] = est;
    }

    int cxc;
    do {
    cout << endl;

    string nombre_buscando;
    cout << "Que estudiante desea buscar?" << endl;
    cout << "Digite el nombre para mostrar la informacion de nombre, edad y calificacion del estudiante:";
    cin >> nombre_buscando;

    if (estudiante.count(nombre_buscando) > 0) {
        Est_general est = estudiante[nombre_buscando];
        cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Calificacion: " << est.calificacion << endl;
    } else {
        cout << "El estudiante no esta registrado, o posiblemente esta mal escrito, reintente nuevamente." << endl;
    }

    cout << endl;
    cout << "Desea buscar otro estudiante?" << endl;
    cout << "1 para SI / 0 para NO :";
    cin >> cxc;
    } while(cxc == 1);

    return 0;
}
