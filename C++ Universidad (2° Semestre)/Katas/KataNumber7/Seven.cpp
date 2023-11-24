#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

int encontrarUnico(std::vector<int> numeros) {
    std::unordered_map<int, int> conteo;
    for (int num : numeros) {
        conteo[num]++;
    }
    for (int num : numeros) {
        if (conteo[num] == 2) {
            return num;
        }
    }
    return 0;
}

int main() {
    std::vector<int> numeros;
    std::string linea;
    std::cout << "Por favor, ingrese los números uno por uno (ingrese 'fin' cuando haya terminado): ";

    while (getline(std::cin, linea) && numeros.size() < 10) {
        if(linea == "fin") break;
        std::istringstream iss(linea);
        int num;
        if(iss >> num){
            numeros.push_back(num);
        }
    }

    if(numeros.size() >= 10){
        std::cout << "Excedió el número de arrays" << std::endl;
        return 0;
    }

    int unico = encontrarUnico(numeros);

    if(unico != 0){
        std::cout << "El número que se repite exactamente dos veces es: " << unico << std::endl;
    } else {
        std::cout << "No hay ningún número que se repita exactamente dos veces." << std::endl;
    }

    return 0;
}
