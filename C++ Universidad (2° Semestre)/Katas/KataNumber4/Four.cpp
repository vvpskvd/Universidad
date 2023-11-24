#include <iostream>
#include <sstream>
#include <vector>

std::string cxcCadena(const std::string& str) {
    std::stringstream ss(str);
    std::string item;
    std::vector<std::string> elmnts;

    while (std::getline(ss, item, ',')) {
        elmnts.push_back(item);
    }

    if (elmnts.size() <= 2) {
        return "NULL";
    }

    std::string resultado;
    for (size_t i = 1; i < elmnts.size() - 1; ++i) {
        resultado += elmnts[i];
        if (i != elmnts.size() - 2) {
            resultado += " ";
        }
    }

    return resultado;
}

int main() {
    std::string cadena;

    std::cout << "Introduce la cadena: ";
    std::cin >> cadena;

    std::string resultado = cxcCadena(cadena);

    if (resultado == "NULL") {
        std::cout << "La cadena resultante esta vacia.\n";
    } else {
        std::cout << "La cadena resultante es: " << resultado << "\n";
    }

    return 0;
}
