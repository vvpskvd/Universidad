#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int final_cxc = 174;
    int max_sum = 0;

    vector<int> cxc = {50, 55, 57, 58, 60};

    sort(cxc.rbegin(), cxc.rend()); // Ordenar en orden descendente

    vector<int> final_ini;

    for (int i = 0; i < 3; ++i) {
        int sum = cxc[i];
        if (sum <= final_cxc) {
            max_sum += sum;
            final_ini.push_back(i);
        }
    }

    cout << "Las distancias seleccionadas son:" << endl;

    for (int ini : final_ini)
    {
        cout << "Ciudad #" << ini + 1 << ": " << cxc[ini] << " millas" << endl;
    }

    cout << "La suma de distancias es: " << max_sum << " millas" << endl;

    return 0;
}
