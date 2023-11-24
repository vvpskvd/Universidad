#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

string ArrayAENTERO(const vector<char>& arr) {
    string resultado;
    for (int i = 0; i < arr.size(); i++) {
        resultado += arr[i];
        if (i < arr.size() - 1) {
            resultado += ",";
        }
    }
    return resultado;
}

int main() {
    vector<char> elementos = {'a', 'r', 'r', 'o', 'z'};

    string resultado = ArrayAENTERO(elementos);

    cout << "Resultado: " << resultado << endl;

    return 0;
}
