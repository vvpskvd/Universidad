#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1, num2;
    double total_sum, total_res, total_mult, total_div;
    cout << "Bienvenido a la calculadora personal. \n";
    cout << "Que operacion desea realizar. \n";
    cout << "Ingrese S para suma / Ingrese R para resta / Ingrese para M multiplicacion / Ingrese D para division. \n";
    cin >> op;

    cout << endl;

    switch (op) {
        case 'S' :
            cout << "Operaciones de suma \n";
            cout << "Ingrese un numero seguido del otro por enter: \n";
            cin >> num1;
            cin >> num2;
            total_sum=num1+num2;
            cout << "El total de su suma es: " << total_sum << endl;
            break;

        case 'R' :
            cout << "Operaciones de resta \n";
            cout << "Ingrese un numero seguido del otro por enter: \n";
            cin >> num1;
            cin >> num2;
            total_res=num1-num2;
            cout << "El total de su resta es: " << total_res << endl;
            break;

        case 'M' :
            cout << "Operaciones de multiplicacion \n";
            cout << "Ingrese un numero seguido del otro por enter: \n";
            cin >> num1;
            cin >> num2;
            total_mult=num1*num2;
            cout << "El total de su multiplicacion es: " << total_mult << endl;
            break;

        case 'D' :
            cout << "Operaciones de division \n";
            cout << "Ingrese un numero seguido del otro por enter: \n";
            cin >> num1;
            cin >> num2;
            total_div=num1/num2;
            cout << "El total de su division es: " << total_div << endl;
            break;

        default:
            cout << "Ingreso no valido, reintente nuevamente." << endl;
            break;

            return 0;
    }
}
