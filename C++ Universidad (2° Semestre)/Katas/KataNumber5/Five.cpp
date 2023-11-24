#include <iostream>
#include <vector>
#include <numeric>

double calcularMedia(const std::vector<int>& cxc, int x, int y) {
    int n = cxc.size();

    if (x <= 1 || x > n || y <= 1 || y > n) {
        return -1;
    }

    double mediaX = std::accumulate(cxc.begin(), cxc.begin() + x, 0.0) / x;
    double mediaY = std::accumulate(cxc.end() - y, cxc.end(), 0.0) / y;

    return (mediaX + mediaY) / 2;
}

int main() {
    std::vector<int> cxc = {1, 3, 2, 4};
    int x;
    int y;

    std::cout << "Ingrese el valor de X: \n";
    std::cin >> x;
    std::cout << "Ingrese el valor de Y: \n";
    std::cin >> y;


    double resultado = calcularMedia(cxc, x, y);

    if (resultado == -1) {
        std::cout << "Los valores de X o Y no son validos, el resultado es -1. \n.";
    } else {
        std::cout << "La media es: " << resultado << "\n";
    }

    return 0;
}
