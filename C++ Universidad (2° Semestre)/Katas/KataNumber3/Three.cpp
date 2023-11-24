#include <iostream>
#include <string>
#include <algorithm>

bool cxcContrario(const std::string& ini1, const std::string& ini2) {
    if (ini1.empty() && ini2.empty()) {
        return false;
    }

    if (ini1.size() != ini2.size()) {
        return false;
    }

    for (std::size_t i = 0; i < ini1.size(); ++i) {
        if (std::tolower(ini1[i]) != std::tolower(ini2[i]) || ini1[i] == ini2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string ini1, ini2;

    std::cout << "Introduce la primera letra / cadena de palabras: ";
    std::cin >> ini1;

    std::cout << "Introduce la segunda letra / cadena de palabras: ";
    std::cin >> ini2;

    if (cxcContrario(ini1, ini2)) {
        std::cout << "Las cadenas son opuestas.\n";
    } else {
        std::cout << "Las cadenas son iguales.\n";
    }

    return 0;
}
